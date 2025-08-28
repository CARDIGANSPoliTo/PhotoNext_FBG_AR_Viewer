using System;
using System.Collections.Generic;
using System.Net;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Linq;
using UnityEngine;
using Ping = System.Net.NetworkInformation.Ping;

public class TCPManager : MonoBehaviour
{

    List<string> allLocalIP = new List<string>();
    string localIPAddress = "127.0.0.1";

    private ulong firstLatencyTime = 0;
    private ulong lastLatencyTime = 0;

    ulong timePassed = 0;

    // Start is called before the first frame update
    void Awake()
    {
        // Save all the unicast addresses of the pc, excluded the virtual and the loopback ones, into a list.
        foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
        {
            if (item.OperationalStatus == OperationalStatus.Up && !item.Description.Contains("Virtual") && !item.Description.Contains("Loopback"))
            {
                foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
                {
                    if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
                    {
                        allLocalIP.Add(ip.Address.ToString());
                    }
                }
            }
        }
    }

    #region SERVER_METHODS
    public bool InitTcpListener()
    {
        string[] parts;
        string subNet = "";

        try
        {
            // Get local ip (supposed client/server interrogator is in the same lan connection)
            if (!GameManager.tcpInfo.IPAddress.Equals("127.0.0.1"))
            {
                parts = GameManager.tcpInfo.IPAddress.Split('.');
                parts = parts.Take(parts.Length - 1).ToArray();
                subNet = String.Join(".", parts);

                localIPAddress = allLocalIP.Where(e => e.Contains(subNet)).ToList()[0];
            }
            Task.Run(() => ListenerConfig(GameManager.tcpInfo.Port));
            Task.Run(() => ListenerData(GameManager.tcpInfo.Port + 1));
        }
        catch (Exception e)
        {
            Debug.Log(e.Message);
            return false;
        }
        return true;
    }
    
    /// <summary>
    /// TCP Server for the application, it run on a different thread
    /// </summary>
    public void ListenerData(Int32 port)
    {
        // Local variables
        IPAddress localAddr = null;
        TcpListener server = null;
        TcpClient client = new TcpClient();

        try
        {
            localAddr = IPAddress.Parse(localIPAddress);//("192.168.1.96");

            // TCPListener setted with Ip and port
            server = new TcpListener(localAddr, port);// 13000);
            server.Start();
            Debug.Log("START SERVER");

            // Waiting for connection loop until the application stops
            while (!GameManager.TermianteThread)
            {
                // Set debug message on display
                //GameManager.instance.AddErrorMessage("Wait for connection...");
                Debug.Log("Wait for connection...");

                using (client = server.AcceptTcpClient())
                {
                    Debug.Log("New client");
                    ServeClientData(client);
                }
            }
        }
        catch (SocketException e)
        {
            // Set debug message on display
            //GameManager.instance.AddErrorMessage(e.Message);
            Debug.Log(e);
            //GameManager.instance.stopSimulation = true;
        }
        catch (Exception e)
        {
            // Set debug message on display
            //GameManager.instance.AddErrorMessage(e.Message);
            Debug.Log(e);
            //GameManager.instance.stopSimulation = true;
        }
        finally
        {
            client.Close();
            server.Stop();
        }
        Debug.Log("EXIT SERVER");
    }
    
    /// <summary>
    /// TCP Server for the network configuration
    /// </summary>
    public void ListenerConfig(Int32 port)
    {
        // Local variables
        IPAddress localAddr = null;
        TcpListener server = null;
        TcpClient client = new TcpClient();
        NetworkStream stream = null;

        int i = 0;
        byte[] bytes;

        TypeMessage type;

        try
        {
            localAddr = IPAddress.Parse(localIPAddress);

            // TCPListener setted with Ip and port
            server = new TcpListener(localAddr, port);
            server.Start();
            // Waiting for connection loop until the application stops
            while (!GameManager.TermianteThread)
            {
                // Set debug message on display
                //UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => GameManager.instance.AddErrorMessage("Wait for connection...")));
                Debug.Log("Wait for Config connection...");
                using (client = server.AcceptTcpClient())
                {
                    try
                    {
                        string ip = ((IPEndPoint)client.Client.RemoteEndPoint).Address.ToString();
                        /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                        GameManager.instance.AddErrorMessage($"Client connected! ip: {ip}")));*/

                        bytes = new byte[1];
                        stream = client.GetStream();

                        Debug.Log("A Client connection to server on " + client.Client.RemoteEndPoint.ToString());

                        // Check type of the packet (first byte)
                        if ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
                        {
                            type = (TypeMessage)bytes[0];
                            switch (type)
                            {
                                case TypeMessage.ConfigPacket:
                                    ServeConfigPacket(stream);
                                    break;
                                default:
                                    return;
                            }
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.Log($"Exception: {e}");
                        /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                        {
                            GameManager.instance.AddErrorMessage($"Exception: {e}");
                            GameManager.instance.stopSimulation = true;
                        }));*/
                    }
                    finally
                    {
                        stream.Close();
                        client.Close();
                    }
                    Debug.Log("End of serve config client");
                }
            }
        }
        catch (SocketException e)
        {
            // Set debug message on display
            Debug.Log($"SocketException: {e}");
            /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => {
                GameManager.instance.AddErrorMessage($"Exception: {e}");
                GameManager.instance.stopSimulation = true;
            }));*/
        }
        catch (Exception e)
        {
            // Set debug message on display
            Debug.Log($"Exception: {e}");
            /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => {
                GameManager.instance.AddErrorMessage($"Exception: {e}");
                GameManager.instance.stopSimulation = true;
            }));*/
        }
        finally
        {
            client.Close();
            server.Stop();
        }
        Debug.Log("EXIT SERVER");
    }

    #endregion

    // Client methods
    //-----------------------------------------------------------------------------
    #region CLIENT_METHODS 
    /// <summary>
    /// Send message to the interrogator client
    /// </summary>
    /// <param name="type">Type of message to send</param>
    public void Send(TypeMessage type)
    {
        // Local variables
        TcpClient client = null;
        NetworkStream stream = null;

        Ping pingServer = null;
        PingOptions pingOptions = null;
        PingReply pingReply = null;

        string ip = GameManager.tcpInfo.IPAddress;
        int timeout = 120;
        string dataPing = "pingmessage-aaaaaaaa";

        byte[] buffer;

        Debug.Log("OnSend");

        try
        {
            // Send ping message to destination server to check if exists
            pingServer = new Ping();
            pingOptions = new PingOptions();
            pingOptions.DontFragment = true;

            buffer = Encoding.ASCII.GetBytes(dataPing);

            pingReply = pingServer.Send(GameManager.tcpInfo.IPAddress, timeout, buffer, pingOptions);

            try
            {
                if (pingReply.Status != IPStatus.Success)
                {
                    throw new Exception($"The IP {GameManager.tcpInfo.IPAddress} is not reachable");
                }
            }
            catch(Exception e) { Debug.Log(e); }

            // Create new TcpClient
            client = new TcpClient();
            if (type == TypeMessage.EndThreadPacket)
                ip = localIPAddress;

            Debug.Log("Connection on " + ip + ", port " + GameManager.tcpInfo.Port);
            if (!client.ConnectAsync(ip, GameManager.tcpInfo.Port ).Wait(TimeSpan.FromSeconds(5)))
            {
                throw new Exception("Connection timed out.");
            }
            //var success = result.AsyncWaitHandle.WaitOne(TimeSpan.FromSeconds(5));
            //if (!success) throw new Exception("Timeout");
            // Set message to send based on type
            buffer = new byte[1];
            switch (type)
            {
                case TypeMessage.EndThreadPacket:
                case TypeMessage.RequestConfig:
                case TypeMessage.RequestDataStart:
                case TypeMessage.RequestDataEnd:
                    buffer[0] = Convert.ToByte(type);
                    break;
                default:
                    throw new Exception("Not supported");
            }
            // Send the message to the server
            stream = client.GetStream();
            
            stream.Write(buffer, 0, buffer.Length);
            if (type == TypeMessage.EndThreadPacket)
            {
                client.Close();
                client = new TcpClient();
                var result = client.BeginConnect(ip, GameManager.tcpInfo.Port + 1, null, null);
                var success = result.AsyncWaitHandle.WaitOne(TimeSpan.FromSeconds(2));
                Debug.Log("Connection on " + ip + ", port " + GameManager.tcpInfo.Port);

                stream = client.GetStream();
                stream.Write(buffer, 0, buffer.Length);
            }
        }
        catch (ArgumentNullException e)
        {
            Debug.Log(e.Message);
            //UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => GameManager.instance.AddErrorMessage(e.Message)));
        }
        catch (SocketException e)
        {
            Debug.Log(e.Message);
        }
        catch (Exception e)
        {
            //UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => GameManager.instance.AddErrorMessage($"{e.Message}")));
            Debug.Log(e);
        }
        finally
        {
            if (stream != null)
                stream.Close();
            if (client != null)
                client.Close();
        }
    }
    
    /// <summary>
    /// Serve client connected to the server
    /// </summary>
    /// <param name="result">TcpClient object received from</param>
    public void ServeClientData(TcpClient result)
    {
        // Local variables
        NetworkStream stream = null;
        TcpClient client = result;

        int i = 0;
        int count = 0;
        //float wavelenght = 0.0f;
        //UInt64 timestamp = 0;
        //float radius;
        //float intensity;

        TypeMessage type;
        //Sensor sensorInfo;

        Vector4[] properties = new Vector4[64];
        byte[] bytes;
        Dictionary<int, Sensor> _sensors = new Dictionary<int, Sensor>();
        //List<KeyValuePair<UInt64, float>> wavelength_data = GameManager.instance.GetCurrentSensorWavelength();

        try
        {
            string ip = ((IPEndPoint)client.Client.RemoteEndPoint).Address.ToString();
            /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                GameManager.instance.AddErrorMessage($"Client connected! {ip}")
            ));*/

            bytes = new byte[777];//[769];
            stream = result.GetStream();
            Debug.Log("A Client connection to server on " + ip.ToString());

            // Check type of the packet (first byte)
            while ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
            {
                count = 0;
                //first = true;
                type = (TypeMessage)bytes[0];
               
                switch (type)
                {
                    case TypeMessage.DataPacket:
                        count++;
                        break;
                    default:
                        continue;
                }
               
                byte[] sendTime = new byte[8];
                Array.Copy(bytes, count, sendTime, 0, 8);
                count += 8;

                bool first = true;

                for (int j = 0; j < 64; j++)
                {
                    

                    byte[] wv = new byte[4];
                    byte[] ts = new byte[8];

                    Array.Copy(bytes, count, ts, 0, 8);
                    Array.Copy(bytes, (count + 8), wv, 0, 4);

                    //UInt64 timestamp = BitConverter.ToUInt64(ts, 0);    //CURRENT TIME E NON TIMESTAMP
                    ulong timestamp = BitConverter.ToUInt64(sendTime, 0);
                    //trova il primo timestamp != 0
                    if (first && timestamp != 0)
                    {
                        firstLatencyTime = timestamp;
                        first = false;
                    } 
                        
                    float wavelength = BitConverter.ToSingle(wv, 0);
                    
                    int id = j;

                   
                    Sensor sensorInfo = GameManager.GetSensorInfo(id);
                    if (sensorInfo == null) {
                        count += 12;
                        continue;
                    }
                    //voglio il primo latency dell'ultimo gruppo di sensori
                    if (timestamp != 0) lastLatencyTime = timestamp;
                    
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

                    radius = GameManager.modelScale * GameManager.heatMapScale;
                    intensity = ((float)Math.Abs(wavelength - sensorInfo.WavelengthIdle) / GameManager.globalMaxVariation);

                    sensorInfo.Wavelength = wavelength;
                    properties[id] = new Vector2(radius, intensity);
                    count += 12;
                }
                if (count == 777) //769) 
                {
                    first = true;
                    ulong now = (ulong)DateTimeOffset.Now.ToUnixTimeMilliseconds();
                    
                    // If the time passed between the receivings is higher than the value selected by the user, the values will be displayed.
                    if (now - timePassed > GameManager.millisToUpdateGraph)
                    {
                        timePassed = now;
                        //media tra primo e ultimo timestamp -> last + first / 2
                        //ora - media è la latenza
                        
                        ulong latencyTime = now - ((lastLatencyTime + firstLatencyTime) / 2);

                        firstLatencyTime = 0;


                        UnityMainThreadDispatcher.Instance().Enqueue(new Action(() =>
                        {
                            GameManager.UpdateData(_sensors, properties.ToArray(), (long)latencyTime);
                        }));
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.Log(e.Message);
            /*UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => {
                GameManager.instance.AddErrorMessage(e.Message);
                GameManager.instance.stopSimulation = true;
            }));*/
        }
        finally
        {
            stream.Close();
            client.Close();
        }
        Debug.Log("End of serve data client");
    }


    /// <summary>
    /// Serve configuration packet
    /// </summary>
    /// <param name="stream">Network stream from clien</param>
    void ServeConfigPacket(NetworkStream stream)
    {
        // Local variables
        Dictionary<int, Sensor> sensors = new Dictionary<int, Sensor>();
        byte[] bytes = new byte[25];

        int i = 0;
        int count = 0;

        int channel;
        int grating;
        bool is_active;
        //int id;
        float wavelength_var;
        float wavelength_idle;
        Vector3 position;

        Debug.Log("Received config packet");
        while ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
        {
            channel = count / 16;

            byte[] readPacket = new byte[4];
            Array.Copy(bytes, 0, readPacket, 0, 4);
            /*id*/grating = BitConverter.ToInt32(readPacket, 0);

            readPacket = new byte[1];
            Array.Copy(bytes, 4, readPacket, 0, 1);
            is_active = BitConverter.ToBoolean(readPacket, 0);


            readPacket = new byte[4];
            Array.Copy(bytes, 5, readPacket, 0, 4);
            wavelength_idle = BitConverter.ToSingle(readPacket, 0);

            Array.Copy(bytes, 9, readPacket, 0, 4);
            wavelength_var = BitConverter.ToSingle(readPacket, 0);

            position = Vector3.zero;
            Array.Copy(bytes, 13, readPacket, 0, 4);
            position.x = BitConverter.ToSingle(readPacket, 0);
            Array.Copy(bytes, 17, readPacket, 0, 4);
            position.y = BitConverter.ToSingle(readPacket, 0);
            Array.Copy(bytes, 21, readPacket, 0, 4);
            position.z = BitConverter.ToSingle(readPacket, 0);

            if (is_active)
            {
                Sensor sensor = new Sensor(channel, grating);
                var index = channel * 16 + grating;
                sensors.Add(index, sensor);
            }
            

            /*
            Sensor sensor = new Sensor(id, idle, var, active);
            sensor.Channel = channel;
            sensor.Position = position;
            sensors.Add(sensor);
            */
            count++; //sono in ordine i sensori?

            /*
            int channel = doc.GetValue("channel").AsInt32;
            int grating = doc.GetValue("grating").AsInt32;
            bool is_active = doc.GetValue("is_active").AsBoolean;
            float wavelength_idle = (float)doc.GetValue("wavelength_idle").AsDouble;
            float wavelength_var = (float)doc.GetValue("wavelength_var").AsDouble;
            Vector3 position = new Vector3((float)doc.GetValue("position_x").AsDouble, (float)doc.GetValue("position_y").AsDouble, (float)doc.GetValue("position_z").AsDouble);

            Sensor sensor = new Sensor(channel, grating, wavelength_idle, wavelength_var, is_active);
            sensor.Position = position;

            //calcola l'index e fai il map
            var index = channel * 16 + grating;

            sensors.Add(index, sensor);*/
        }

        UnityMainThreadDispatcher.Instance().Enqueue(new Action(() => {
            GameManager.SetSensorsConfiguration(sensors);
        }));

    }
    #endregion
}
