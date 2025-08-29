using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using MongoDB.Bson;
using MongoDB.Driver;
using System;
using System.Linq;
public class MongoDBManager : MonoBehaviour
{
    
    private MongoClient client = null;
    
    IMongoDatabase database;
    
    IMongoCollection<BsonDocument> collection;
    
    List<BsonDocument> results = new List<BsonDocument>();

    long timePassed = 0;

    private long firstLatencyTime = 0;
    private long lastLatencyTime = 0;

    private bool last = false;

    private const int databaseEntries = 10000;
    
    public bool InitMongoDB()
    {
        if (client == null)
        {
            client = new MongoClient("mongodb://" + GameManager.mongoInfo.Username + ":" + GameManager.mongoInfo.Password + "@" + GameManager.mongoInfo.IPAddress + ":" + GameManager.mongoInfo.Port + "/" + GameManager.mongoInfo.DBName);
            //client = new MongoClient("mongodb://photonextFlights:9AdeRrXkSXpjAu@" + "larissa.polito.it" + ":" + "58931" + "/photonextFlights"); //connetto a mongo cambia valori da file config
            //client = new MongoClient("mongodb://photonextTest:EQiQ-EdP%263xd_Ckrm@" + "larissa.polito.it" + ":" + "58931" + "/photonextTest"); //connetto a mongo cambia valori da file config
            //database = client.GetDatabase(MongoInformation.DBName);  //nome db

            database = client.GetDatabase(GameManager.mongoInfo.DBName);  //nome db

            //database = client.GetDatabase("photonextFlights");  //nome db
            if (database.RunCommandAsync((Command<BsonDocument>)"{ping:1}").Wait(1000))
            {
                //GameManager.instance.SetErrorMessage("MongoDB Network Configuration - Ping OK");
                return true;
            }
            else
            {
                if (database.RunCommandAsync((Command<BsonDocument>)"{ping:1}").Wait(5000))
                {
                    
                    return true;
                }
                //GameManager.instance.SetErrorMessage("MongoDB Network Configuration - it is not possible to connect to " + DbName);
                //se il ping non risponde subito dai la possibilita di ritentare con un ping piu alto 
                client = null;
                return false;
            }
        }
        else
            return true;
    }
    public void GetSensorConfiguration()
    {
        Dictionary<int, Sensor> sensors = new Dictionary<int, Sensor>();
        
        if (GameManager.conn == ConnType.ChangeStream)
        {
            List<string> colls = database.ListCollectionNames().ToList();

            List<string> names = new List<string>();

            foreach (string i in colls)
            {
                if (i.Contains("_"))
                {
                    names.Add(i.Split('_')[1]);
                }
                else
                {
                    names.Add(i);
                }
            }
            names.Sort();
            names.Reverse();

            foreach (string n in colls)
            {
                if (n.Contains(names.First()))
                {
                    GameManager.mongoInfo.CollectionName = n;
                    break;
                }
            }
        }
        collection = database.GetCollection<BsonDocument>(GameManager.mongoInfo.CollectionName);
        //collection = database.GetCollection<BsonDocument>("SMARTSCAN_202112051503501638713030053");
        //Debug.Log("ChangeStreamManager - Getting sensor configuration" + GameManager.MongoInformation.CollectionName);
        var filter = Builders<BsonDocument>.Filter.Eq("type", "config") & Builders<BsonDocument>.Filter.Eq("is_active", true);
        var sort = Builders<BsonDocument>.Sort.Ascending("channel").Ascending("grating");
        var results = collection.Find(filter).Sort(sort).ToList();
        foreach (BsonDocument doc in results)
        {
            int channel = doc.GetValue("channel").AsInt32;
            int grating = doc.GetValue("grating").AsInt32;

            Sensor sensor = new Sensor(channel, grating);

            //calcola l'index e fai il map
            var index = channel * 16 + grating;

            sensors.Add(index, sensor);
        }

        UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
        {
            GameManager.SetSensorsConfiguration(sensors);
        }));
    }

    #region REAL_TIME
    public void StartWatch()
    {
        var options = new ChangeStreamOptions { FullDocument = ChangeStreamFullDocumentOption.UpdateLookup };
        var pipeline = new EmptyPipelineDefinition<ChangeStreamDocument<BsonDocument>>().Match("{ operationType: { $in: ['insert'] } }");

        Vector4[] properties = new Vector4[64];

        while (!GameManager.TermianteThread)
        {

            using (var cursor = collection.Watch(pipeline, options))
            {
                while (cursor.MoveNext() && cursor.Current.Count() == 0 && !GameManager.TermianteThread)
                {
                    //Debug.Log("ChangeStreamManager : Waiting for data");
                } // keep calling MoveNext until we've read the first batch
                
                var result = cursor.Current;
                foreach (var elem in result)
                {
                    Dictionary<int, Sensor> _sensors = new Dictionary<int, Sensor>();

                    var next = elem.FullDocument;
                    int id = next.GetValue("index").AsInt32;
                    double wavelength = (float)next.GetValue("wavelength").AsDouble;
                    long timestamp = (long)next.GetValue("curr_time").AsInt64;
                    long now = DateTimeOffset.Now.ToUnixTimeMilliseconds();

                    Sensor sensorInfo = GameManager.GetSensorInfo(id);
                    if (sensorInfo == null) continue;

                    Debug.Log(sensorInfo.Channel);

                    if (firstLatencyTime == 0) firstLatencyTime = timestamp;
                    else lastLatencyTime = timestamp;

                    float radius = 0;
                    float intensity = 0;

                    if (wavelength != 0)
                    {
                        if (sensorInfo.WavelengthIdle == 0) //Set idle as the first non-zero value of wavelenght
                        {
                            sensorInfo.WavelengthIdle = wavelength;
                            UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                            {
                                GameManager.UpdateSensorIdle(id, wavelength);
                            }));
                        }
                    }
                    //radius = GameManager.Model.transform.localScale.x * GameManager.heatMapScale;

                    radius = GameManager.modelScale * GameManager.heatMapScale;

                    // 0.025f;  //LO 0.2 RISPETTO AL MODELLO


                    intensity = ((float)Math.Abs(wavelength - sensorInfo.WavelengthIdle) / GameManager.globalMaxVariation);

                    sensorInfo.Wavelength = wavelength;
                    //sensorInfo.Intensity = intensity;
                    //sensorInfo.Timestamp = timestamp;

                    _sensors.Add(id, sensorInfo);
                    properties[id] = new Vector2(radius, intensity);
                    if ((now - timePassed) > GameManager.millisToUpdateGraph)
                    {
                        timePassed = now;

                        //media tra primo e ultimo timestamp -> last + first / 2
                        //ora - media è la latenza
                        long latencyTime = now - ((lastLatencyTime + firstLatencyTime) / 2);


                        firstLatencyTime = 0;

                      
                        UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                        {
                            GameManager.UpdateData(_sensors, properties.ToArray(),latencyTime);     //non sono tutti i sensori ma solo quelli che in questo istante di tempo sono stati precedentemente aggiornati
                        }));
                    }
                }
            }
        }
    }
    #endregion

    #region NON_REALTIME
    /// <summary>
    /// Method to set during non real time the first value of wavelength (as idle) and timestamp
    /// </summary>
    public void FirstBatchData()
    {
        //trova il primo timestamp da mongo e setta l'idle dei sensori
        var filter = Builders<BsonDocument>.Filter.Eq("type", "peakData");
        var sort = Builders<BsonDocument>.Sort.Ascending("curr_time");

        var pipeline = new BsonDocument[]
        {
            new BsonDocument("$match",
            new BsonDocument("type", "peakData")),
            new BsonDocument("$sort",
            new BsonDocument("curr_time", 1)),
            new BsonDocument("$group",
            new BsonDocument
                {
                    { "_id", "$index" },
                    { "curr_time",
            new BsonDocument("$first", "$curr_time") },
                    { "wavelength",
            new BsonDocument("$first", "$wavelength") },
                    { "timestamp",
            new BsonDocument("$first", "$timestamp") }
                })
        };

        var results = collection.Aggregate<BsonDocument>(pipeline).ToList();

        foreach (BsonDocument doc in results)
        {

            int id = doc.GetValue("_id").AsInt32;
            double wavelength = (float)doc.GetValue("wavelength").AsDouble;
            long timestamp = (long)doc.GetValue("curr_time").AsInt64;
            GameManager.GUIManager.timestamp = timestamp;
            Sensor sensorInfo = GameManager.GetSensorInfo(id);
            if (sensorInfo == null) continue;
            if (wavelength != 0)
            {
                if (sensorInfo.WavelengthIdle == 0) //Set idle as the first non-zero value of wavelenght
                {
                    sensorInfo.WavelengthIdle = wavelength;
                    GameManager.UpdateSensorIdle(id, wavelength);
                }
            }
        }
    }
    /// <summary>
    /// Method to extract new batch from db if the old one is almos processed
    /// </summary>
    /// <param name="t">timestamp</param>
    public void GetPastData(long t)
    {
        var filter = Builders<BsonDocument>.Filter.Eq("type", "peakData") & Builders<BsonDocument>.Filter.Gte("curr_time", t);
        var sort = Builders<BsonDocument>.Sort.Ascending("curr_time");
        try
        {
            results = collection.Find(filter).Sort(sort).Limit(databaseEntries).ToList();

            if (results.Count < databaseEntries)
            {
                //se arrivato all'ultimo batch
                last = true;
            }
        }
        catch (Exception)
        {
            //problemi col db
            Debug.Log("ERR");
            return;
        }

    }
    /// <summary>
    /// Method called each time the time has passed and the gui need to update
    /// </summary>
    /// <param name="t">timestamp</param>
    /// <param name="properties">the value of radius and intensity for the hatmap</param>
    /// <returns></returns>
    public bool GetLastValues(long t, Vector4[] properties)
    {
        //Debug.Log("timestamp real: " + t);
        // se sono vicino alle ultime entries

        if (last && results[results.Count - 1].GetValue("curr_time").AsInt64 < t) return true; //last value

        if (results.Count == 0 || results.FindIndex(x => x.GetValue("curr_time").AsInt64 >= t) >= (databaseEntries * 0.8f)) 
        {
            //Debug.Log("nuova richiesta, index: " + results.FindIndex(x => x.GetValue("curr_time").AsInt64 >= t));
            if (results.Count == 0) GetPastData(0);
            else
            {
                GetPastData(t);
            }           
        }
        Dictionary<int, Sensor> _sensors = new Dictionary<int, Sensor>();

        //DEVO TROVARE IL TIMESTAMP PIU RECENTE DI TUTTI GLI INDEX
        var DistinctSensors = results.Where(x => x.GetValue("curr_time").AsInt64 <= t).GroupBy(y => y.GetValue("index").AsInt32).Select(z => z.Last());

        foreach (BsonDocument doc in DistinctSensors)
        {
            int id = doc.GetValue("index").AsInt32;
            double wavelength = (float)doc.GetValue("wavelength").AsDouble;
            long timestamp = (long)doc.GetValue("curr_time").AsInt64;
            Sensor sensorInfo = GameManager.GetSensorInfo(id);
            if (sensorInfo == null) continue;

            float radius = GameManager.modelScale * GameManager.heatMapScale;
            //LO 0.06 RISPETTO AL MODELLO
            float intensity = ((float)Math.Abs(wavelength - sensorInfo.WavelengthIdle) / GameManager.globalMaxVariation);
            //if (id == 0) Debug.Log("w: " + wavelength + " time: " + timestamp);
            //if (id == 0) Debug.Log(id + " " + intensity);
            //Debug.Log(id + " " +intensity);
            sensorInfo.Wavelength = wavelength;
            //sensorInfo.Intensity = intensity;
            //sensorInfo.Timestamp = timestamp;

            _sensors.Add(id, sensorInfo);
            properties[id] = new Vector2(radius, intensity);
        }
        GameManager.UpdateData(_sensors, properties);
        return false;
        //se sono alla fine ritorna qualcosaltro
    }

    /*public bool GetPastData(long t, long t_old, Vector4[] properties)
    {
        Dictionary<int, Sensor> _sensors = new Dictionary<int, Sensor>();
        var pipeline = new BsonDocument[]
        {
            new BsonDocument("$match",
            new BsonDocument
                {
                    { "type", "peakData" },
                    { "$and",
            new BsonArray
            {
                new BsonDocument("curr_time",
                new BsonDocument("$lte", t)),
                new BsonDocument("curr_time",
                new BsonDocument("$gt", t_old))
            } }
        }),
            new BsonDocument("$sort",
            new BsonDocument("curr_time", -1)),
            new BsonDocument("$group",
            new BsonDocument
                {
                    { "_id", "$index" },
                    { "curr_time",
            new BsonDocument("$first", "$curr_time") },
                { "wavelength",
            new BsonDocument("$first", "$wavelength") },
                { "timestamp",
            new BsonDocument("$first", "$timestamp") }
                })
        };
        var res = collection.Aggregate<BsonDocument>(pipeline).ToList();
        //controlla il null la fine
        if (res.Count == 0) {
            return false;
        }
        

        foreach (BsonDocument doc in results)
        {
            int id = doc.GetValue("_id").AsInt32;
            double wavelength = (float)doc.GetValue("wavelength").AsDouble;
            long timestamp = (long)doc.GetValue("curr_time").AsInt64;



            Sensor sensorInfo = GameManager.GetSensorInfo(id);
            if (sensorInfo == null) continue;
            float radius = GameManager.modelScale * GameManager.heatMapScale;
            //LO 0.06 RISPETTO AL MODELLO
            float intensity = ((float)Math.Abs(wavelength - sensorInfo.WavelengthIdle) / GameManager.globalMaxVariation);

            sensorInfo.Wavelength = wavelength;
            //sensorInfo.Intensity = intensity;
            //sensorInfo.Timestamp = timestamp;

            _sensors.Add(id, sensorInfo);
            properties[id] = new Vector2(radius, intensity);
        }
        GameManager.UpdateData(_sensors, properties);

        return true;
    }*/
    #endregion
}
