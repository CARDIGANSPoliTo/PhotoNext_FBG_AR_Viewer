using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.Utilities;
using ChartAndGraph;
using System.Threading.Tasks;
using System.Globalization;
using System.Linq;
using System.IO;
using Dummiesman;

public class GUIManager : MonoBehaviour
{
    //Panel
    //------------------------------------------------
    private GameObject SensorPanel;
    private GameObject ConfigurationPanel;
    private GameObject SensorList;
    private GameObject MonitoringPanel;
    private GameObject TitleBar;
    private GameObject ContentBackPlate;
    private GameObject Latency;

    //Prefab
    //------------------------------------------------
    [SerializeField]
    private GameObject SensorPrefab;
    [SerializeField]
    private GameObject ModelSavedPrefab;
    [SerializeField]
    private GameObject objectPrefab;
    [SerializeField]
    private GameObject DialogPrefab;
    [SerializeField]
    private GameObject SavingPanel;

    //private GameObject[] Model3DPrefabs;
    private List<GameObject> Model3DPrefabs = new List<GameObject>();

    //Utils for save system
    //------------------------------------------------
    private List<Configuration> Configurations;
    private static readonly int SAVE_NUMBER = 11;    //11
    public bool saved = false;

    //Utils for grid model collection
    //------------------------------------------------
    public GameObject ModelsList;
    public GameObject ModelType;

    //Utils for Graph
    //------------------------------------------------
    private GraphChart graph;
    public Material pointMaterial, fillMaterial;
    private double lineThickness = 8f, pointSize = 5f;
    private bool stetchFill = false;
    private const double offsetDivision = 2.5;//0.5;
    private const double offsetSubDivision = 0.5;//0.5;
    public ulong countPoint = 0;
    private uint maxCount = 2000;
    private bool first = true;

    //Utils for past streaming - time management
    //------------------------------------------------
    private float elapsed = 0;
    public long timestamp;
    public long oldTimestamp = 0;

    private GameObject SensorsModel;

    private Vector4[] properties = new Vector4[64];


    // Start is called before the first frame update
    void Start()
    {
        SensorList = GameObject.FindGameObjectWithTag("SensorList");
        MonitoringPanel = GameObject.FindGameObjectWithTag("MonitoringPanel");
        SensorPanel = GameObject.FindGameObjectWithTag("SensorPanel");
        ConfigurationPanel = GameObject.FindGameObjectWithTag("ConfigurationPanel");

        SensorsModel = GameManager.Model.transform.GetChild(1).gameObject;
        ConfigurationPanel.SetActive(false);
        SensorPanel.SetActive(false);
        MonitoringPanel.SetActive(false);
    }


    #region CONFIGURATION_PANEL
    /// <summary>
    /// Method to start config phase
    /// </summary>
    public void StartConfigurationPhase()
    {
        ConfigurationPanel.SetActive(true);
        //load salvataggio
        Configurations = LoadConfiguration();

        //mostra pannello configurazioni con bottone nuovo e bottoni empty
        GenerateModelSavedGrid();
    }
    /// <summary>
    /// Instantiate element (prefab) in the panel to show previously configuration saved, order by date descending
    /// </summary>
    public void GenerateModelSavedGrid()
    {
        ConfigurationPanel.transform.GetChild(0).GetChild(3).GetComponent<TextMeshPro>().text = GameManager.Model.transform.GetChild(0).GetChild(0).name;
        foreach (Configuration s in Configurations)
        {
            var savedconfig = Instantiate(ModelSavedPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            savedconfig.transform.SetParent(ConfigurationPanel.transform.GetChild(2), false);    //figlio di saveState
            savedconfig.GetComponent<SavedConfiguration>().configuration = s;
            savedconfig.GetComponent<ButtonConfigHelper>().MainLabelText = s.name;
            savedconfig.transform.GetChild(2).GetChild(4).GetComponent<TextMeshPro>().text = s.modelName + " - " + s.date;
            savedconfig.GetComponent<ButtonConfigHelper>().OnClick.AddListener(() => savedconfig.GetComponent<SavedConfiguration>().OnClickSavedConfiguration());

        }
        ConfigurationPanel.transform.GetChild(2).GetComponent<BaseObjectCollection>().UpdateCollection();
    }
    /// <summary>
    /// Called when the user click on button new to create a new custom sensor configuration
    /// </summary>
    public void NewConfiguration()
    {
        //se log attivo crea file e inizia a raccogliere i dati
        if (GameManager.MeasuramentLog.enabled)
        {
            GameManager.MeasuramentLog.StartSensorpositioningPhaseLog();
        }
        ConfigurationPanel.SetActive(false); //panel with saved configuration turn off
        ActivateGUISensorPanel(true);
        GenerateSensorList();
    }
    /// <summary>
    /// Method to verify if the number and the index of the received sensor from the DB are the same of the saved configuration chosen
    /// </summary>
    private bool VerifyConsistentConfiguration(Configuration c)
    {
        if (GameManager.sensors.Count < c.sensors.Count || !c.modelName.Equals(GameManager.Model.transform.GetChild(0).GetChild(0).name))
        {
            return false;
        }
        foreach (Model m in c.sensors)
        {
            if (!GameManager.sensors.ContainsKey(m.index))
            {
                return false;
            }
        }
        return true;
    }
    #endregion

    #region IMPORT_MODEL
    //al click di import, nascondi il configPanel
    public void OnClickImport()
    {
        ConfigurationPanel.SetActive(false);
        ModelsList.SetActive(true);
        SetPanelPosition(ModelsList, "ModelsList");


        Model3DPrefabs.Clear();
        GetModelsFromDirectory();


        //aggiungi default model (anche modello 3d)
        var bt = Instantiate(ModelType, ModelsList.transform);
        bt.GetComponent<ButtonConfigHelper>().MainLabelText = "Default Model";
        foreach (GameObject model in Model3DPrefabs)
        {
            NormalizeModel(model, 0.1f);
            //per ogni model crea un bottone col suo nome
            var button = Instantiate(ModelType, ModelsList.transform);
            button.GetComponent<ButtonConfigHelper>().MainLabelText = model.name;

            //var m = Instantiate(model, button.transform.position + new Vector3(0,0.1f,0), Quaternion.identity, button.transform);

            model.transform.SetParent(button.transform, true);
            model.transform.position = Vector3.zero;
            model.transform.position = button.transform.position + new Vector3(0, 0.05f, 0);


        }
        ModelsList.GetComponent<GridObjectCollection>().UpdateCollection();
    }
    /// <summary>
    /// Method to load all obj models located in StreamingAssets/Models folder
    /// </summary>
    private void GetModelsFromDirectory()
    {
        //DirectoryInfo dir = new DirectoryInfo(Application.streamingAssetsPath + "/Models");
        DirectoryInfo dir = new DirectoryInfo(Application.persistentDataPath + "/Models");
        FileInfo[] info = dir.GetFiles("*.obj");
        foreach (FileInfo f in info)
        {
            GameObject obj = new OBJLoader().Load(f.ToString());
            Model3DPrefabs.Add(obj);
        }
    }
    //load obj + grid collection circolare
    //se non ci sono dialog e ritorna
    //seleziona modello
    public void ImportModelName(string name)
    {
        if (name.Equals("Default Model")) { GameManager.Model.GetComponent<MonitoringModel>().Update3DModel(null); }
        for (int i = 0; i < Model3DPrefabs.Count; i++)
        {
            if (name.Equals(Model3DPrefabs[i].name))
            {
                GameManager.Model.GetComponent<MonitoringModel>().Update3DModel(Model3DPrefabs[i]);
                break;
            }
        }
        ConfigurationPanel.SetActive(true);
        ConfigurationPanel.transform.GetChild(0).GetChild(3).GetComponent<TextMeshPro>().text = name;
        SetPanelPosition(ConfigurationPanel);
        var children = new List<GameObject>();
        foreach (Transform child in ModelsList.transform) children.Add(child.gameObject);
        children.ForEach(child => Destroy(child));
        ModelsList.SetActive(false);
        //cancella tutti i figli
    }
    //al click, nascondi tutti e dialog vuoi importare nome?
    //si -> elimina il resto e fai diventare obj figlio di MonitoringModel,ModelStructure
    //no -> ritorna a mostrare grid

    //mostra il configPanel
    #endregion

    #region SENSOR_PANEL
    /// <summary>
    /// Method to set initial position in front of camera of different panels
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="type"></param>
    public void SetPanelPosition(GameObject obj, string type = "")
    {
        Vector3 position = new Vector3();
        Quaternion oldrotation = obj.transform.rotation;
        float distance = 0.6f;
        switch (type)
        {
            case "SensorPanel":
                position = -GameManager.cameraObj.right * 0.2f; //left of the user
                distance = 0.5f;
                break;
            case "Model":
                position = GameManager.cameraObj.right * 0.2f;  //right of the user
                break;
            case "ModelsList":
                distance = 0f;
                break;
            default:
                break;
        }
        Quaternion rotation = Quaternion.LookRotation(GameManager.cameraObj.forward);
        position += GameManager.cameraObj.position + (GameManager.cameraObj.forward * distance);
        obj.transform.position = position;
        obj.transform.rotation = rotation;
        if (type.Equals("Model")) obj.transform.rotation = oldrotation;
    }
    /// <summary>
    /// Instantiate element (prefab) in the list of sensor, one prefab for each sensor gotten from the DB
    /// </summary>
    public void GenerateSensorList()
    {
        foreach (KeyValuePair<int, Sensor> sensor in GameManager.sensors)   //è un map di index, sensor
        {
            var s = Instantiate(SensorPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            s.transform.SetParent(SensorList.transform, false);
            s.GetComponent<SensorObject>().index = sensor.Key;  //index oggetto
            s.transform.GetChild(0).GetComponent<ButtonConfigHelper>().MainLabelText = "Ch " + sensor.Value.Channel.ToString() + " G " + sensor.Value.Gratings.ToString(); //sensor index in the name of the button
            s.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<TextMesh>().text = Measurement.Temperature.ToString(); //initialization with temperature

        }
        SensorList.GetComponent<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>().UpdateCollection();    //update scrolling list collection
    }
    /// <summary>
    /// Return to the configuration phase without saving
    /// </summary>
    public void CloseSavingPanel()
    {
        SavingPanel.SetActive(false);
        PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOn);
        ActivateGUISensorPanel(true);
    }
    /// <summary>
    /// Called when the user click save button
    /// </summary>
    public void OnSaveButton()
    {
        //disattiva panel sensor e model
        ActivateGUISensorPanel(false);
        //check if the save slots are full
        if (Configurations.Count > SAVE_NUMBER - 1)
        {
            OpenSaveSlotNumberErrorDialog();
            return;
        }
        //verificare se tutti i sensori sono stati messi -> panel warning
        if (!VerifyAllSensorsPlaced())
        {
            OpenSavingConfigurationErrorDialog();
            return;
        }
        //attiva saving panel
        SetPanelPosition(SavingPanel);
        SavingPanel.SetActive(true);
    }
    /// <summary>
    /// Called when the user click start button
    /// </summary>
    public void OnStartButton()
    {
        ActivateGUISensorPanel(false);
        //controlla se hai salvato
        if (saved)  //se hai salvato vai
        {
            GameManager.StartMonitoring();
        }
        else //altrimenti warning
        {
            OpenStartWithoutSavingDialog();
        }
        //verificare se tutti i sensori sono stati messi -> panel warning NO PERCHE HAI DECISO DI CONTINUARE SENZA SALVARE LA CONFIGURAZIONE (SE SI INVCE APRI ALTRO DIALOG QUANDO CHIUDI QUESTO)       
    }
    /// <summary>
    /// Method to activate 3d model and sensorsPanel during error or saving state
    /// </summary>
    private void ActivateGUISensorPanel(bool value)
    {
        if (value)
        {
            //il panel un po a sinistra
            SetPanelPosition(SensorPanel, "SensorPanel");

            //il modello un po a destra
            SetPanelPosition(GameManager.Model, "Model");
        }
        SensorPanel.SetActive(value);
        GameManager.Model.SetActive(value);
    }

    #endregion

    #region MONITORING_PANEL
    public void ActivateGUIMonitoring()
    {
        TitleBar = MonitoringPanel.transform.GetChild(0).gameObject;
        ContentBackPlate = MonitoringPanel.transform.GetChild(1).gameObject;
        Latency = MonitoringPanel.transform.GetChild(0).GetChild(3).gameObject;

        SensorPanel.SetActive(false);
        if (GameManager.conn == ConnType.PastData)
        {
            Latency.SetActive(false);
        }

        MonitoringPanel.SetActive(true);
        GameManager.Model.SetActive(true);
        //set graph with the number of sensors -> mappa ogni sensore con un asse del grafico       
        SetGraph();
    }
    /// <summary>
    /// Method to turn on/off graph during monitoring
    /// </summary>
    public void OnHideGraph()
    {
        //trasla di -500 la y e mantieni la stessa titlebar
        Vector3 localPos = TitleBar.transform.localPosition;
        string label;
        if (ContentBackPlate.activeSelf)
        {
            label = "Show Graph";
            localPos.y -= 0.5f;
        }
        else
        {
            label = "Hide Graph";
            localPos.y += 0.5f;
        }
        ContentBackPlate.SetActive(!ContentBackPlate.activeSelf);

        TitleBar.transform.localPosition = localPos;
        TitleBar.transform.GetChild(2).GetChild(0).GetComponent<ButtonConfigHelper>().MainLabelText = label;

        /*
        TitleBar.SetActive(!value);
        ContentBackPlate.SetActive(!value);
        TitleBarHideMode.SetActive(value);*/
    }
    /// <summary>
    /// Method to turn on/off 3D model during monitoring
    /// </summary>
    public void OnHideModel()
    {
        if (GameManager.Model.activeSelf)
        {
            TitleBar.transform.GetChild(2).GetChild(1).GetComponent<ButtonConfigHelper>().MainLabelText = "Show 3D Model";
        }
        else
        {
            TitleBar.transform.GetChild(2).GetChild(1).GetComponent<ButtonConfigHelper>().MainLabelText = "Hide 3D Model";
        }
        GameManager.Model.SetActive(!GameManager.Model.activeSelf);
    }
    /// <summary>
    /// Method to toggle follow me panel behaviour
    /// </summary>
    public void FollowMeToggle()
    {
        string buttonName;
        bool enabled = MonitoringPanel.GetComponent<Orbital>().enabled;
        if (enabled)
        {
            buttonName = "Follow";

        }
        else { buttonName = "Unfollow"; }
        TitleBar.transform.GetChild(2).GetChild(2).GetComponent<ButtonConfigHelper>().MainLabelText = buttonName;
        MonitoringPanel.GetComponent<Orbital>().enabled = !enabled;
        MonitoringPanel.GetComponent<UnfollowPanel>().enabled = enabled;
    }
    /// <summary>
    /// Method to close the application
    /// </summary>
    public void Quit()
    {
        Debug.Log("QUIT");
        Application.Quit();
    }
    #endregion

    #region SAVING_CONFIGURATION
    /// <summary>
    /// Creates an object configuration to store all the position and rotation of the sensors, then saves
    /// </summary>
    public void SaveConfiguration()
    {
        MRTKTMPInputField input = SavingPanel.transform.GetChild(1).GetChild(0).GetComponent<MRTKTMPInputField>();
        if (String.IsNullOrEmpty(input.text))
        {
            Debug.Log("NO TEXT"); //scrivi di mettere un nome
            return;
        }
        SavingPanel.SetActive(false);

        //scansiona sensorList per avere indice e tipo di sensore, per ognuno salva la posizione dell'object relativo al sensor lisst
        Configuration config = new Configuration();

        for (int i = 0; i < SensorsModel.transform.childCount; i++) //tutti i figli di sensorModel sono i sensori con l'index al loro interno (sensorManipulation)
        {
            Transform sensor = SensorsModel.transform.GetChild(i);
            int index = sensor.GetComponent<SensorManipulation>().index;
            Vector3 pos = sensor.localPosition;
            Quaternion rot = sensor.localRotation;
            Vector3 scale = sensor.localScale;
            Measurement type = GameManager.sensors[index].measurementType;
            Vector3 heatmapPos = sensor.GetChild(3).localPosition;

            config.sensors.Add(new Model()
            {
                index = index,
                pos = pos,
                rotation = rot,
                scale = scale,
                sensorType = (int)type,
                heatmapPos = heatmapPos,
            });

        }
        config.date = DateTime.Now.ToString();
        config.name = input.text;
        config.modelName = GameManager.Model.transform.GetChild(0).GetChild(0).name;

        //salva la rotazione del modello
        config.modelRotation = GameManager.Model.transform.rotation;
        Configurations.Insert(0, config);
        //Configurations.Add(config);
        ConvertConfigurationsToJson();

        //cambia il tasto in saved e non permettere più il click
        saved = true;
        SensorPanel.transform.GetChild(0).GetChild(2).GetChild(0).GetComponent<ButtonConfigHelper>().MainLabelText = "Saved";
        SensorPanel.transform.GetChild(0).GetChild(2).GetChild(0).GetComponent<Interactable>().IsEnabled = false;

        //chiudi il save panel
        CloseSavingPanel();
    }
    /// <summary>
    /// Method to extract from the json string an object of configuration and order the list (starting from most recent) 
    /// </summary>
    /// <returns></returns>
    public List<Configuration> LoadConfiguration()
    {
        List<Configuration> save;
        string saveString = SaveSystem.Load();
        if (saveString != null)
        {
            save = JsonUtility.FromJson<SaveObject>(saveString).configurations;
            //save.Sort((a, b) => DateTime.Compare(DateTime.Parse(b.date, new CultureInfo("fr-FR", false)), DateTime.Parse(a.date, new CultureInfo("fr-FR", false))));  //descending order
        }
        else { Debug.Log("No Save"); save = new List<Configuration>(); }
        return save;
    }
    /// <summary>
    /// Method to select an old save to delete
    /// </summary>
    public void DeleteOldSave()
    {
        ConfigurationPanel.SetActive(true);
        ConfigurationPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshPro>().text = "Select a configuration to delete";
        for (int i = 2; i < ConfigurationPanel.transform.GetChild(0).childCount; i++)
        {
            ConfigurationPanel.transform.GetChild(0).GetChild(i).gameObject.SetActive(false);
        }

        //cancella tutti i figli e rigenerali
        for (int i = 0; i < ConfigurationPanel.transform.GetChild(2).childCount; i++)
        {
            Destroy(ConfigurationPanel.transform.GetChild(2).GetChild(i).gameObject);
        }
        foreach (Configuration s in Configurations)
        {
            var savedconfig = Instantiate(ModelSavedPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            savedconfig.transform.SetParent(ConfigurationPanel.transform.GetChild(2), false);
            savedconfig.GetComponent<SavedConfiguration>().configuration = s;
            savedconfig.GetComponent<ButtonConfigHelper>().MainLabelText = s.name;
            savedconfig.transform.GetChild(2).GetChild(4).GetComponent<TextMeshPro>().text = s.date;
            savedconfig.GetComponent<ButtonConfigHelper>().OnClick.AddListener(() => savedconfig.GetComponent<SavedConfiguration>().OnClickDeleteSavedConfiguration());

        }
        StartCoroutine(InvokeUpdateCollection());   //called a coroutine to update in the next frame the collection
    }
    private IEnumerator InvokeUpdateCollection()
    {
        yield return null;
        ConfigurationPanel.transform.GetChild(2).GetComponent<GridObjectCollection>().UpdateCollection();
    }
    public void DeleteSavedConfiguration(Configuration c)
    {
        //se non salvo un'altra configurazione, la vecchia config non salvata rimane
        Configurations.Remove(c);
        ConvertConfigurationsToJson();
        //ritorna a sensor
        ConfigurationPanel.SetActive(false);
        ActivateGUISensorPanel(true);
    }
    /// <summary>
    /// Method to sort configuration, convert to json and save to file
    /// </summary>
    private void ConvertConfigurationsToJson()
    {
        SaveObject save = new SaveObject();
        save.configurations = Configurations;
        //ordina la lista dei salvataggi
        //save.configurations.Sort((a, b) => DateTime.Compare(DateTime.Parse(b.date, new CultureInfo("fr-FR", false)), DateTime.Parse(a.date, new CultureInfo("fr-FR", false))));
        string json = JsonUtility.ToJson(save);
        SaveSystem.Save(json);
    }
    #endregion

    #region 3DMODEL
    /// <summary>
    /// Method to set normal scale of gameobject
    /// </summary>
    /// <param name="model"></param>
    public void NormalizeModel(GameObject model, float scale)
    {
        Quaternion currentRotation = model.transform.rotation;
        model.transform.rotation = Quaternion.Euler(0f, 0f, 0f);
        Bounds bounds = new Bounds(model.transform.position, Vector3.zero);
        foreach (Renderer renderer in model.GetComponentsInChildren<Renderer>())
        {
            bounds.Encapsulate(renderer.bounds);
        }
        model.transform.rotation = currentRotation;
        // In world-space!
        var size = bounds.size;
        float unit = Mathf.Max(Mathf.Max(size.x, size.y), size.z);

        model.transform.localScale /= unit;
        model.transform.localScale *= scale;
    }
    /// <summary>
    /// Method to generate all the sensor in the same position and rotation written in the json file
    /// </summary>
    public void ShowSavedConfiguration(Configuration c)
    {
        if (!VerifyConsistentConfiguration(c))
        {
            ConfigurationPanel.SetActive(false);
            OpenConfigurationSavedErrorDialog();
            return;
            //la configurazione è sbagliata, apri un avvertimento
        }
        GameManager.Model.SetActive(true);
        //posizione dell'aere sbagliata
        GameManager.Model.transform.position = GameManager.cameraObj.position + new Vector3(0f, 0f, 0.5f);
        //GameManager.Model.GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Follow>().enabled = false;
        ConfigurationPanel.SetActive(false);
        //metti i sensori nella posizione salvata
        //foreach istanzia un object
        foreach (Model s in c.sensors)
        {
            GameManager.sensors[s.index].measurementType = (Measurement)s.sensorType;
            GameManager.sensors[s.index].Position = s.heatmapPos;

            var temp = Instantiate(objectPrefab, GameManager.Model.transform.GetChild(1));
            temp.transform.localPosition = s.pos;
            temp.transform.localRotation = s.rotation;
            temp.transform.localScale = s.scale;
            temp.transform.GetChild(s.sensorType).gameObject.SetActive(true);
            temp.transform.GetChild(2).GetComponent<TextMeshPro>().text = "Ch " + GameManager.sensors[s.index].Channel.ToString() + " G " + GameManager.sensors[s.index].Gratings.ToString();
            temp.transform.GetChild(3).localPosition = s.heatmapPos;
            temp.GetComponent<SensorManipulation>().index = s.index;
        }
        //panel con posibilità di fare start o tornare a config salvate/new
        GameManager.Model.transform.rotation = c.modelRotation;
        GameManager.StartMonitoring();
    }
    /// <summary>
    /// Turn On/Off manipulation of sensors
    /// </summary>
    /// <param name="value">True to disable, False to enable</param>
    public void DisableSensorManipulation(bool value)
    {
        GameObject Sensors = GameManager.Model.transform.GetChild(1).gameObject;
        for (int i = 0; i < Sensors.transform.childCount; i++)
        {
            Sensors.transform.GetChild(i).GetComponent<ObjectManipulator>().enabled = !value;
            Sensors.transform.GetChild(i).GetComponent<NearInteractionGrabbable>().enabled = !value;
        }
    }
    /// <summary>
    /// Method to verify during configuration if all the sensors are attached to the model
    /// </summary>
    /// <returns></returns>
    private bool VerifyAllSensorsPlaced()
    {
        bool placed = true;
        foreach (KeyValuePair<int, Sensor> sensor in GameManager.sensors)
        {
            if (!sensor.Value.Placed) { placed = false; break; }
        }
        if (placed) //mostra il bottone save configuration
        {
            return true;
        }
        else return false;
    }
    #endregion

    #region HEAT_MAP
    /// <summary>
    /// Method to set type of sensor and number of max sensors in shader
    /// </summary>
    public void SetSensorHeatmapPositionAndType()
    {
        float[] type = new float[64];
        foreach (KeyValuePair<int, Sensor> s in GameManager.sensors)
        {
            type[s.Key] = (float)s.Value.measurementType;
        }

        Material material = GameManager.Model.transform.GetChild(0).GetComponent<MeshRenderer>().material;
        material.SetFloatArray("_Type", type);
        material.SetInt("_Points_Length", 64);


    }
    /// <summary>
    /// Method to update position in shader of each senosor
    /// </summary>
    public void UpdateSensorHeatmapPosition()
    {
        Vector4[] positions = new Vector4[64];
        for (int i = 0; i < SensorsModel.transform.childCount; i++)
        {
            Transform sensor = SensorsModel.transform.GetChild(i);
            positions[sensor.GetComponent<SensorManipulation>().index] = sensor.GetChild(3).position;    //heatmapPosition
        }
        Material material = GameManager.Model.transform.GetChild(0).GetComponent<MeshRenderer>().material;

        material.SetVectorArray("_Points", positions);

    }
    /// <summary>
    /// Method to update intensity of sensors in shader
    /// </summary>
    /// <param name="prop"></param>
    public void UpdateShader(Vector4[] prop)
    {
        Material material = GameManager.Model.transform.GetChild(0).GetComponent<MeshRenderer>().sharedMaterial;
        properties = prop;
        material.SetVectorArray("_Properties", prop);
    }
    #endregion

    #region GRAPH
    /// <summary>
    /// Method to set monitoring graph with the same number of vertical axis as sensor
    /// </summary>
    public void SetGraph()
    {
        var axis = MonitoringPanel.GetComponentInChildren<VerticalAxis>();
        var sensors = GameManager.GetSensorsInfo();
        graph = MonitoringPanel.GetComponentInChildren<GraphChart>();
        axis.MainDivisions.Total = sensors.Count + 1;
        axis.SubDivisions.Total = 5;
        //aggiungi subdivision per ogni linea ogni 0.1 nanometro
        //la distanza tra wavelength è 0.5

        graph.DataSource.VerticalViewOrigin = -offsetDivision;
        graph.DataSource.VerticalViewSize = sensors.Count * offsetDivision + offsetDivision;

        //Clear label for extra division 
        graph.VerticalValueToStringMap[graph.DataSource.VerticalViewOrigin] = "";
        graph.VerticalValueToStringMap[graph.DataSource.VerticalViewOrigin + offsetSubDivision] = "";
        graph.VerticalValueToStringMap[graph.DataSource.VerticalViewOrigin + offsetSubDivision * 2] = "";
        graph.VerticalValueToStringMap[sensors.Count * offsetDivision] = "";
        graph.VerticalValueToStringMap[sensors.Count * offsetDivision - offsetSubDivision] = "";
        graph.VerticalValueToStringMap[sensors.Count * offsetDivision - offsetSubDivision * 2] = "";

        double j = 0;
        for (int i = 0; i < sensors.Count; i++)
        {
            sensors.ElementAt(i).Value.division = j;
            graph.VerticalValueToStringMap[j] = "Ch " + (sensors.ElementAt(i).Value.Channel + 1) + " G " + (sensors.ElementAt(i).Value.Gratings + 1);
            double label = -offsetSubDivision * 2;

            for (int k = 0; k < 4; k++)
            {
                //i due valori sotto e i due valori sopra
                graph.VerticalValueToStringMap[sensors.ElementAt(i).Value.division + label] = label.ToString();
                label += offsetSubDivision;
                if (label == 0) label = offsetSubDivision;
            }
            j += offsetDivision;
        }
        GameManager.SetSensorsConfiguration(sensors);
        InsertCategory();
    }
    public void InsertCategory()
    {
        //graph = MonitoringPanel.GetComponentInChildren<GraphChart>();

        MaterialTiling lineTiling = new MaterialTiling(true, 10);

        //trova tutti i sensori e aggiungili come categoria
        var sensors = GameManager.GetSensorsInfo();
        graph.DataSource.StartBatch();
        graph.DataSource.Clear();
        foreach (KeyValuePair<int, Sensor> s in sensors)
        {
            string nameCategory = "Ch " + (s.Value.Channel + 1) + " G " + (s.Value.Gratings + 1);

            //Color color = UnityEngine.Random.ColorHSV();
            Color color = Color.white;

            Material newmat = new Material(pointMaterial);
            newmat.color = color;
            graph.DataSource.AddCategory(nameCategory, newmat, lineThickness, lineTiling, fillMaterial, stetchFill, newmat, pointSize);
        }
        graph.DataSource.EndBatch();
    }

    private float X = 0f;

    /// <summary>
    /// Method to update categories in chart
    /// </summary>
    public void UpdateCategory(long latencyTime)
    {
        var sensors = GameManager.GetSensorsInfo();
        string unit = " ms";
        
        if (GameManager.conn != ConnType.PastData)
        {
            if (latencyTime >= 1000)
            {
                unit = " s";
                latencyTime /= 1000;
                Math.Round((float)latencyTime, 2);
            }
            Latency.GetComponent<TextMeshPro>().text = "Latency: " + latencyTime + unit;
        }
        if (first && countPoint >= maxCount)
        {
                graph.DataSource.AutomaticHorizontalView = false;
                graph.DataSource.HorizontalViewSize = X;
                first = false;          
        }

        foreach (KeyValuePair<int, Sensor> s in sensors)
        {
            string nameCategory = "Ch " + (s.Value.Channel + 1) + " G " + (s.Value.Gratings + 1);
            //clamp to [-1,1]
            double wavelength = Mathf.Clamp((float)(s.Value.Wavelength - s.Value.WavelengthIdle), -1.0f, 1.0f);
            wavelength += /*s.Value.Wavelength - s.Value.WavelengthIdle +*/ s.Value.division;
            graph.DataSource.AddPointToCategoryRealtime(nameCategory, X, wavelength);
            countPoint++;
        }
        X++;
    }
    #endregion

    #region DIALOG
    public void OpenConfigurationSavedErrorDialog()
    {
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Close, "Error", "The configuration is different to the sensors gotten by DB", true);

        if (d != null)
        {
            d.OnClosed += OnClosedConfigurationSavedErrorDialogEvent;
        }
    }
    public void OpenConnectionErrorDialog()
    {
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Close, "MongoDB Network Configuration", " It is not possible to connect to the network", true);
        if (d != null)
        {
            d.OnClosed += OnClosedConnectionErrorDialogEvent;
        }
    }
    public void OpenSavingConfigurationErrorDialog()
    {
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Confirm | DialogButtonType.Close, "Warning", "There are some sensors not placed in the model. Continue?", true);
        if (d != null)
        {
            d.OnClosed += OnClosedSavingConfigurationErrorDialogEvent;
        }
    }
    public void OpenSaveSlotNumberErrorDialog()
    {
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Yes | DialogButtonType.No, "Error", "You don't have any empty save slot. Do you want delete an old save?", true);
        if (d != null)
        {
            d.OnClosed += OnClosedSaveSlotNumberErrorDialogEvent;
        }
    }
    public void OpenFileConfigErrorDialog(string x)
    {
        /*
        SensorPanel.SetActive(false);
        ConfigurationPanel.SetActive(false); 
        */
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Close, "File Config Error", x, true);

        if (d != null)
        {
            d.OnClosed += OnClosedConnectionErrorDialogEvent;
        }
    }
    public void OpenStartWithoutSavingDialog()
    {
        var d = Dialog.Open(DialogPrefab, DialogButtonType.Yes | DialogButtonType.No, "Warning", "You don't have saved the current configuration. Continue?", true);
        if (d != null)
        {
            d.OnClosed += OnClosedStartWithoutSavingDialogEvent;
        }
    }
    private void OnClosedStartWithoutSavingDialogEvent(DialogResult obj)
    {
        if (obj.Result == DialogButtonType.Yes)
        {
            GameManager.StartMonitoring();
        }
        else if (obj.Result == DialogButtonType.No)
        {
            ActivateGUISensorPanel(true);
        }
    }
    private void OnClosedSavingConfigurationErrorDialogEvent(DialogResult obj)
    {
        if (obj.Result == DialogButtonType.Confirm)
        {
            //Show save panel
            SavingPanel.SetActive(true);    //la posizione deve essere davanti al giocatore
            PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);
        }
        else if (obj.Result == DialogButtonType.Close)
        {
            ActivateGUISensorPanel(true);
        }
    }
    private void OnClosedConfigurationSavedErrorDialogEvent(DialogResult obj)
    {
        ConfigurationPanel.SetActive(true);
    }
    private void OnClosedConnectionErrorDialogEvent(DialogResult obj)
    {
        Debug.Log("QUIT");
        //esci dall'app
        Application.Quit();
    }
    private void OnClosedSaveSlotNumberErrorDialogEvent(DialogResult obj)
    {
        //quando dici si devi creare un panel con la selezione del save da cancellare (poi richiama onStartButton)
        //se dici no continua senza salvare
        if (obj.Result == DialogButtonType.Yes)
        {
            DeleteOldSave();
        }
        else if (obj.Result == DialogButtonType.No)
        {
            //don't do anything, return to previous panel
        }
    }
    #endregion

    public void Update()
    {
        //Only during non real time
        if (GameManager.pastMonitoring)
        {
            //conta il tempo trasorso, se è passato abbastanza tempo aggiorna
            elapsed += Time.deltaTime;
            var elapsedMillis = elapsed * 1000;
            if (elapsedMillis >= GameManager.millisToUpdateGraph)
            {
                timestamp += (long)elapsedMillis;

                if (GameManager.MongoDBManager.GetLastValues(timestamp, properties))
                {
                    Debug.Log("FINE");
                    GameManager.pastMonitoring = false;
                    Material material = GameManager.Model.transform.GetChild(0).GetComponent<MeshRenderer>().material;
                    material.SetInt("_Points_Length", 0);
                    //GameManager.TermianteThread = true;
                }
                oldTimestamp = timestamp;
                elapsed = 0;
            }
        }
    }
}