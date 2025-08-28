using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Text.RegularExpressions;
using System.Linq;
using System.Reflection;

public class FileConfig : MonoBehaviour
{
    public static ConnType ReadConfig(string readFromFilePath)
    {
        try
        {
            string line = File.ReadLines(readFromFilePath).First().ToString();
            IEnumerable<string> lines = File.ReadLines(readFromFilePath);
            if (line.Contains("Connection Type"))
            {
                string info = parseString(line);
                if (!CheckStandardString(info))
                {
                    GameManager.GUIManager.OpenFileConfigErrorDialog("Something is wrong with the connection type.");
                    return ConnType.None;
                }
                info.ToLower();
                char.ToUpper(info[0]);
                ConnType conn = CheckConnType(info);
                switch (conn)
                {
                    case ConnType.ChangeStream:
                    case ConnType.PastData:
                        //if (ReadChangestreamConfig(lines)) return conn;
                        if (ReadUserData(lines, conn)) return conn;
                        else return ConnType.None;
                    case ConnType.Tcp:
                        if (ReadUserData(lines, conn)) return conn;
                        else return ConnType.None;
                    default:
                        GameManager.GUIManager.OpenFileConfigErrorDialog("Something is wrong with the connection type.");
                        return ConnType.None;
                }
            }
        }
        catch (FileNotFoundException)
        {
            //copia un file config vuoto nella cartella giusta
            File.Copy(Application.streamingAssetsPath + "/config.txt", Application.persistentDataPath + "/config.txt");
            GameManager.GUIManager.OpenFileConfigErrorDialog("Can't find config file, created empty file to configure.");
        }
        return ConnType.None;
    }

    private static bool ReadUserData(IEnumerable<string> lines, ConnType c)
    {
        int error = 0;
        string errorName = "Something is wrong with the ";
        string[] data = new string[] { "IP address", "Port", "Username", "Password", "Database Name", "Collection Name" };
        bool[] entered = new bool[] { false, false, false, false, false, false };
        foreach (string line in lines.Skip(1))
        {
            if (c != ConnType.Tcp && line.Contains("Username"))
            {
                GameManager.mongoInfo.Username = parseString(line);
                entered[2] = true;
                if (!CheckStandardString(GameManager.mongoInfo.Username))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "Username";
                    error = 1;
                }
            }
            else if (c != ConnType.Tcp && line.Contains("Password"))
            {
                GameManager.mongoInfo.Password = parseString(line);
                entered[3] = true;
                if (!CheckStandardString(GameManager.mongoInfo.Password))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "Password";
                    error = 1;
                }
            }
            else if (line.Contains("IP"))
            {
                if (c == ConnType.Tcp) GameManager.tcpInfo.IPAddress = parseString(line);
                else GameManager.mongoInfo.IPAddress = parseString(line);
                entered[0] = true;
                if (!CheckIpAddress(GameManager.mongoInfo.IPAddress))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "IP";
                    error = 1;
                }
            }
            else if (line.Contains("Port"))
            {
                string port = parseString(line);
                entered[1] = true;
                if (!CheckPort(port))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "Port";
                    error = 1;
                }
                else
                {
                    if (c == ConnType.Tcp) int.TryParse(port, out GameManager.tcpInfo.Port);
                    else int.TryParse(port, out GameManager.mongoInfo.Port);
                }
            }
            else if (c != ConnType.Tcp && line.Contains("Database Name"))
            {
                GameManager.mongoInfo.DBName = parseString(line);
                entered[4] = true;
                if (!CheckStandardString(GameManager.mongoInfo.DBName))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "Database Name";
                    error = 1;
                }
            }
            else if (c == ConnType.PastData && line.Contains("Collection Name"))
            {
                GameManager.mongoInfo.CollectionName = parseString(line);
                entered[5] = true;
                if (!CheckStandardString(GameManager.mongoInfo.CollectionName))
                {
                    Debug.Log("ERRORE"); //setta variabile errore
                    errorName += "Collection Name";
                    error = 1;
                }
            }
        }

        if (error == 1)
        {
            errorName += " in the config file.";
            GameManager.GUIManager.OpenFileConfigErrorDialog(errorName);
            Debug.Log("ERRORE");
            return false;
        }

        int n = 6;

        if (c == ConnType.Tcp) n = 2;
        else if (c == ConnType.ChangeStream) n = 5;

        for (int i = 0; i < n; i++)
        {
            if (!entered[i])
            {
                GameManager.GUIManager.OpenFileConfigErrorDialog(data[i] + " is missing in the config file.");
                return false;
            }
        }
        return true;
    }
    
    private static string parseString(string s)
    {
        string[] subs = s.Split(':');
        if (subs.Length != 2) Debug.Log("ERRORE");
        return Regex.Replace(subs[1], @"\s+", "");
    }

    #region VERIFY_STRING
    private static bool CheckStandardString(string s)
    {
        if ((!s.Equals("")) && (!s.Contains(" "))) return true;
        else return false;
    }
    /*
    private static bool CheckUsername(string s) {
        if ((!s.Equals("")) && (!s.Contains(" "))) return true;
        else return false;
    }
    private static bool CheckPassword(string s) {
        if ((!s.Equals("")) && (!s.Contains(" "))) return true;
        else return false;
    }*/
    private static bool CheckIpAddress(string s)
    {
        /*if (Regex.IsMatch(s, @"^(([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])\.){3}([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])$")) return true;
        else return false;*/
        return true;
    }
    private static bool CheckPort(string s)
    {
        int portNumber = 0;
        if (int.TryParse(s, out portNumber))
        {
            if (portNumber >= 0 && portNumber <= 65535) return true;
            else return false;
        }
        return false;
    }
    private static ConnType CheckConnType(string s)
    {
        switch (s)
        {
            case "Local":
                return ConnType.Tcp;
            case "Database":
                return ConnType.ChangeStream;
            case "Past":
                return ConnType.PastData;
            default: //error
                return ConnType.None;
        }
    }

    /*
    private static bool CheckDatabaseName(string s) {
        if ((!s.Equals("")) && (!s.Contains(" "))) return true;
        else return false;
    }
    private static bool CheckCollectionName(string s) {
        if ((!s.Equals("")) && (!s.Contains(" "))) return true;
        else return false;
    }*/




    /*
    public static void WriteString()
    {
        string path = Application.streamingAssetsPath + "config" + ".txt";
        //Write some text to the test.txt file
        StreamWriter writer = new StreamWriter(path, true);
        writer.WriteLine("Test");
        writer.Close();
        StreamReader reader = new StreamReader(path);
        //Print the text from the file
        Debug.Log(reader.ReadToEnd());
        reader.Close();
    }
    public static void ReadString()
    {
        string path = Application.streamingAssetsPath + "/config.txt";
        //Read the text from directly from the test.txt file
        StreamReader reader = new StreamReader(path);
        Debug.Log(reader.ReadToEnd());
        reader.Close();
    }*/
    #endregion
}
