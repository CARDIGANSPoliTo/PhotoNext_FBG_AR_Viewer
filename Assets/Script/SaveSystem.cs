using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class SaveSystem 
{
    //path save folder
    //private static readonly string SAVE_FOLDER = Application.dataPath + "/Saves";
    //private static readonly string SAVE_FOLDER = Application.streamingAssetsPath;
    private static readonly string SAVE_FOLDER = Application.persistentDataPath;

    public static void Init()
    {
        //test id save folder exists
        /*if (!Directory.Exists(SAVE_FOLDER))
        {
            //create save folder
            Directory.CreateDirectory(SAVE_FOLDER);
        }*/
    }
    //save file
    public static void Save(string saveString)
    {
        File.WriteAllText(SAVE_FOLDER + "/save.txt", saveString);
    }
    //load file
    public static string Load()
    {
        if (File.Exists(SAVE_FOLDER + "/save.txt"))
        {
            string saveString = File.ReadAllText(SAVE_FOLDER + "/save.txt");
            return saveString;
        }
        else return null;
    }
}

