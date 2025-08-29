using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Threading.Tasks;
using System.Linq;

public enum Measurement
{
    Temperature,
    Displacement
}

public enum ConnType
{
    ChangeStream,
    Tcp,
    PastData,
    None
}

#region SAVE_OBJECT
[Serializable]
public class SaveObject
{
    public List<Configuration> configurations = new List<Configuration>();
}
[Serializable]
public class Configuration
{
    public string name;
    public string date;
    public string modelName;
    public Quaternion modelRotation;
    public List<Model> sensors = new List<Model>();
}
[Serializable]
public class Model
{
    public int index;
    public int sensorType;
    public Vector3 pos;
    public Quaternion rotation;
    public Vector3 scale;
    public Vector3 heatmapPos;
}
#endregion

public class GameManager : MonoBehaviour
{
    //Script
    //------------------------------------------------
    [HideInInspector]
    public static FileConfig FileConfig;
    [HideInInspector]
    public static MongoDBManager MongoDBManager;
    [HideInInspector]
    public static MonitoringModel MonitoringModel;
    [HideInInspector]
    public static TCPManager TCPManager;
    [HideInInspector]
    public static GUIManager GUIManager;
    public static MeasuramentLog MeasuramentLog;

    //Turn on for Measurament Log
    //------------------------------------------------
    [SerializeField]
    [Tooltip("Turn on to generate csv measurement log")]
    private bool Log = false;

    [HideInInspector]
    public static GameObject Model;
    [HideInInspector]
    public static Transform cameraObj;

    [HideInInspector]
    public static Dictionary<int,Sensor> sensors = new Dictionary<int, Sensor>();

    [HideInInspector]
    public static bool TermianteThread = false;
    
    [HideInInspector]
    public const int millisToUpdateGraph = 1000;  //DA CAMBIARE E METTERE NEL CONFIG
    [HideInInspector]
    public const int globalMaxVariation = 1;  
    [HideInInspector]
    public const float heatMapScale = 0.06f;
    [HideInInspector]
    public static float modelScale = 0.4f;

    public static MongoInformation mongoInfo = new MongoInformation();
    public static TCPInformation tcpInfo = new TCPInformation();
    public static ConnType conn;

    [HideInInspector]
    public static bool pastMonitoring = false;    
    [HideInInspector]
    public static bool changeStreamMonitoring = false;
    [HideInInspector]
    public static bool localMonitoring = false;

    private void Awake()
    {
        FileConfig = FindObjectOfType<FileConfig>();
        MongoDBManager = FindObjectOfType<MongoDBManager>();
        TCPManager = FindObjectOfType<TCPManager>();
        GUIManager = FindObjectOfType<GUIManager>();
        
        MonitoringModel = FindObjectOfType<MonitoringModel>();
        Model = GameObject.FindWithTag("Model");        
        cameraObj = GameObject.FindGameObjectWithTag("MainCamera").transform;

        MeasuramentLog = FindObjectOfType<MeasuramentLog>();

        Model.SetActive(false);

        
    }

    private void Start()
    {
        SaveSystem.Init();

        //crea cartella models
        if (!Directory.Exists(Application.persistentDataPath + "/Models"))
        {
            //create save folder
            Directory.CreateDirectory(Application.persistentDataPath + "/Models");
        }

        //string path = Application.streamingAssetsPath + "/config.txt";
        string path = Application.persistentDataPath + "/config.txt";
        ConnType result = FileConfig.ReadConfig(path);
        switch (result)
        {
            case ConnType.ChangeStream:
                conn = ConnType.ChangeStream;
                break;
            case ConnType.Tcp:
                conn = ConnType.Tcp;
                break;
            case ConnType.PastData:
                conn = ConnType.PastData;
                break;
            default:
                Debug.Log("Errore");    //stoppa e non fare nulla
                return;
                //GUIManager.OpenFileConfigErrorDialog("Configuration");
        }
        StartUp();  //init connection
    }

    #region CONFIGURATION_PHASE
    /// <summary>
    /// Method to init type of connection
    /// </summary>
    private void StartUp()
    {
        switch (conn)
        {
            case ConnType.ChangeStream:
            case ConnType.PastData:
                if (MongoDBManager != null)
                {
                    if (!MongoDBManager.InitMongoDB())
                    {
                        Debug.Log("ERROR INIT DB");
                        //GUIManager.enabled = true;
                        GUIManager.OpenConnectionErrorDialog();
                    }
                    else
                    {
                        if (Log) MeasuramentLog.enabled = true; 
                        MongoDBManager.GetSensorConfiguration();
                        GUIManager.StartConfigurationPhase();
                        //GUIManager.enabled = true;
                    }
                }
                break;
            case ConnType.Tcp:
                if (TCPManager != null)
                {
                    if (!TCPManager.InitTcpListener())
                    {
                        Debug.Log("ERROR INIT TCP");
                        GUIManager.OpenConnectionErrorDialog();
                    }
                    else
                    {
                        
                        if (Log) MeasuramentLog.enabled = true;
                        Task.Run(() => TCPManager.Send(TypeMessage.RequestConfig));
                        GUIManager.StartConfigurationPhase();
                    }
                }
                break;
        }
    }
    /// <summary>
    /// Method to set in the dictionary variable the sensors informations
    /// </summary>
    /// <param name="s">Dictionary to obtain index, sensor pair</param>
    public static void SetSensorsConfiguration(Dictionary<int, Sensor> s)
    {
        sensors = s;
    }
    /// <summary>
    /// Update in dictionary with only sensors selected during configuration phase
    /// </summary>
    private static void SetMonitoringSensors()
    {
        List<int> index = new List<int>();
        foreach (SensorManipulation s in Model.transform.GetChild(1).GetComponentsInChildren<SensorManipulation>())
        {
            index.Add(s.index);
        }
        //se per ogni chiave in sensors non esiste nella lista personalizzata, eliminalo
        Dictionary<int,Sensor>.KeyCollection keyColl = sensors.Keys;
        foreach (var key in sensors.Keys.Except(index).ToList())
        {
            sensors.Remove(key);
        }
    }
    #endregion

    #region MONITORING_PHASE
    /// <summary>
    /// Method to start the monitoring phase
    /// </summary>
    public static void StartMonitoring()
    {
        if (MeasuramentLog.enabled)
        {
            //se c'è stata la fase di pos allora chiama end sensor pos
            if (MeasuramentLog.sensorMonitoringPhase) MeasuramentLog.EndSensorpositioningPhaseLog();            
            MeasuramentLog.StartMonitoringPhaseLog();
        }
        SetMonitoringSensors();
        GUIManager.DisableSensorManipulation(true);
        MonitoringModel.CombineMeshes();
        Model.transform.hasChanged = false;
        GUIManager.ActivateGUIMonitoring();
        GUIManager.SetSensorHeatmapPositionAndType();
        GUIManager.UpdateSensorHeatmapPosition();

        switch (conn)
        {
            case ConnType.ChangeStream:
                Task.Run(() => MongoDBManager.StartWatch());
                changeStreamMonitoring = true;
                break;
            case ConnType.PastData:
                MongoDBManager.FirstBatchData();
                pastMonitoring = true;                
                break;
            case ConnType.Tcp:
                Task.Run(() => TCPManager.Send(TypeMessage.RequestDataStart));
                localMonitoring = true;
                break;
        }
    }

    /// <summary>
    /// Method to get Sensor s by id
    /// </summary>
    /// <param name="id"></param>
    /// <returns></returns>
    public static Sensor GetSensorInfo(int id)
    {
        
        lock (sensors)
        {
            if (!sensors.ContainsKey(id)) return null;
            else return sensors[id];
        }
    }
    /// <summary>
    /// Method to get all Sensos 
    /// </summary>
    /// <param name="id"></param>
    /// <returns></returns>
    public static Dictionary<int,Sensor> GetSensorsInfo()
    {

        lock (sensors)
        {
            return sensors;
        }
    }
    /// <summary>
    /// Method to update the wavelenght idle 
    /// </summary>
    /// <param name="id"></param>
    /// <param name="wavelenght"></param>
    public static void UpdateSensorIdle(int id, double wavelenght)
    {
        lock (sensors)
        {
            sensors[id].WavelengthIdle = wavelenght;
            sensors[id].Wavelength = wavelenght;
        }
    }
    /// <summary>
    /// Method to update Heatmap and graph
    /// </summary>
    public static void UpdateData(Dictionary<int, Sensor> _sensors, Vector4[] prop, long latencyTime = -1)
    {
        lock (sensors)
        {
            foreach (KeyValuePair<int,Sensor> s in _sensors)
            {
                sensors[s.Key] = s.Value;
            }
        }
        GUIManager.UpdateShader(prop);
        GUIManager.UpdateCategory(latencyTime);
    }
    #endregion

    private void OnApplicationQuit()
    {
        TermianteThread = true;
        if (conn == ConnType.Tcp)
        {
            TCPManager.Send(TypeMessage.EndThreadPacket);
            if(!changeStreamMonitoring) TCPManager.Send(TypeMessage.RequestDataEnd);
        }
    }
}
