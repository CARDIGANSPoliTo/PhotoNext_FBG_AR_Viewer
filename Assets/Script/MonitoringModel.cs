using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.Input;

public class MonitoringModel : MonoBehaviour
{

    private GameObject ModelStructure;

    private GameObject ImportedModelStructure;

    public GameObject DefaultModelPrefab;

    public Material material;

    private const float scale = 0.4f;

    // Start is called before the first frame update
    void Awake()
    {
        ModelStructure = transform.GetChild(0).gameObject;
        //istanzia il modello prefab
        ImportedModelStructure = Instantiate(DefaultModelPrefab, ModelStructure.transform);
        ImportedModelStructure.name = "Default Model";
        //DOPO AVER IMPORTATO IL MODELLO OPPURE QUELLO DI DEFAULT FALLO DIVENTARE FIGLIO DI MODELSTRUCTURE
        //ImportedModelStructure = ModelStructure.transform.GetChild(0).gameObject;
        GUIManager GUIManager = FindObjectOfType<GUIManager>();
        GUIManager.NormalizeModel(ImportedModelStructure, scale);   //normalizzato, moltiplica per la scala corretta (0.4f)

        AddComponentToImportedObject();
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.hasChanged && (GameManager.pastMonitoring || GameManager.changeStreamMonitoring || GameManager.localMonitoring))   //se la posizione è cambiata devo ricalcolare i punti di posizione heatmap non solo past monitoring
        {
            GameManager.GUIManager.UpdateSensorHeatmapPosition();
            transform.hasChanged = false;
        }
    }
    /// <summary>
    /// Method to set new 3d model to monitor
    /// </summary>
    /// <param name="model"></param>
    public void Update3DModel(GameObject model)
    {
        if (model == null)
        {
            model = DefaultModelPrefab;
        }
        Destroy(ImportedModelStructure);
        //elimina tutti i componenti attaccati tranne monitoring
        var components = GetComponents<Component>();
        foreach (Component c in components)
        {
            if (!(c is MonitoringModel) && !(c is Transform)) Destroy(c);
        }
        ImportedModelStructure = Instantiate(model, ModelStructure.transform);
        ImportedModelStructure.name = model.name;
        ImportedModelStructure.transform.position = Vector3.zero;
        GameManager.GUIManager.NormalizeModel(ImportedModelStructure, scale);   //normalizzato, moltiplica per la scala corretta (0.4f)
        AddComponentToImportedObject();

    }
    /// <summary>
    /// Method to combine meshes after configuration phase
    /// </summary>
    public void CombineMeshes()
    {

        ModelStructure.AddComponent<MeshFilter>();
        ModelStructure.AddComponent<MeshRenderer>();


        Quaternion oldRot = transform.rotation;
        Vector3 oldPos = transform.position;

        transform.rotation = Quaternion.identity;
        transform.position = Vector3.zero;

        MeshFilter[] meshFilters = ModelStructure.GetComponentsInChildren<MeshFilter>();
        Mesh finalMesh = new Mesh();

        CombineInstance[] combiners = new CombineInstance[meshFilters.Length];

        for (int i = 0; i < meshFilters.Length; i++)
        {

            if (meshFilters[i].transform == transform)
                continue;
            combiners[i].subMeshIndex = 0;
            combiners[i].mesh = meshFilters[i].sharedMesh;
            combiners[i].transform = meshFilters[i].transform.localToWorldMatrix;
        }

        finalMesh.CombineMeshes(combiners);

        ModelStructure.GetComponent<MeshFilter>().mesh = finalMesh;    //ModelStructure -> mesh

        transform.rotation = oldRot;
        transform.position = oldPos;

        for (int i = 0; i < ModelStructure.transform.childCount; i++)
        {
            ModelStructure.transform.GetChild(i).gameObject.SetActive(false);
        }


        var mesh = ModelStructure.AddComponent<MeshCollider>()/*.convex = true*/;
        mesh.sharedMesh = finalMesh;
        mesh.convex = true;
        ModelStructure.GetComponent<MeshRenderer>().sharedMaterial = material;


        /////////////////////////////////////////////////////////////
        /*ModelStructure.*/
        transform.localScale = /*ModelStructure.*/transform.localScale * 3f;
        //ora monitoring model ha il size doppio (tutto si muove con lui)

        //crea un gameobject figlio di MonitoringModel e padre di structure e sensor
        GameObject Model = new GameObject();
        Model.transform.position = Vector3.zero;
        Model.name = "Model";


        transform.SetParent(Model.transform);
        transform.position = Vector3.zero;


        Model.AddComponent<SolverHandler>();

        var model = Model.AddComponent<Orbital>();
        model.LocalOffset = new Vector3(0.8f, 0.2f, 4f);

        model.OrientationType = Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType.FollowTrackedObject;
        gameObject.GetComponent<ObjectManipulator>().AllowFarManipulation = false;
        GameManager.modelScale *= transform.localScale.x;
    }
    /// <summary>
    /// Method to add all needed component to model
    /// </summary>
    private void AddComponentToImportedObject()
    {
        var objman = gameObject.AddComponent<ObjectManipulator>();

        /*int layer_mask = LayerMask.NameToLayer("Model");
        gameObject.layer = layer_mask;
        Transform[] children = GetComponentsInChildren<Transform>();
        foreach (Transform child in children)
        {
            child.gameObject.layer = layer_mask;
        }
        */

        //nuovo
        //objman.HostTransform = ModelStructure.transform;

        gameObject.AddComponent<ConstraintManager>();
        var minmax = gameObject.AddComponent<MinMaxScaleConstraint>();
        minmax.RelativeToInitialState = false;
        minmax.ScaleMinimum = gameObject.transform.localScale.x * 0.66f;
        minmax.ScaleMaximum = gameObject.transform.localScale.x * 1.33f;

        ImportedModelStructure.AddComponent<Rigidbody>().isKinematic = true;
        /*
        var box = ImportedModelStructure.AddComponent<BoxCollider>();
        box.isTrigger = true;


        //Calculate how big is the collider

        Quaternion currentRotation = ImportedModelStructure.transform.rotation;
        ImportedModelStructure.transform.rotation = Quaternion.Euler(0f, 0f, 0f);
        Bounds bounds = new Bounds(ImportedModelStructure.transform.position, Vector3.zero);
        foreach (Renderer renderer in ImportedModelStructure.GetComponentsInChildren<Renderer>())
        {
            bounds.Encapsulate(renderer.bounds);
        }
        Vector3 localCenter = bounds.center - ImportedModelStructure.transform.position;
        bounds.center = localCenter;
        //Debug.Log("The local bounds of this model is " + bounds);
        ImportedModelStructure.transform.rotation = currentRotation;


        // In world-space!
        var size = bounds.size;
        var center = bounds.center;

        // converted to local space of the collider
        size = box.transform.InverseTransformVector(size);
        center = box.transform.InverseTransformPoint(center);

        box.size = size * 2f;   //RIDIMENSIONA IL COLLIDER CHE SCATENA IL TRIGGER DURANTE LA MANIPOLAZIONE
        box.center = center;


        ImportedModelStructure.AddComponent<ModelTrigger>();
        */


        //ImportedModelStructure.AddComponent<SolverHandler>();   

        //ModelStructure

        MeshFilter[] meshFilters = GetComponentsInChildren<MeshFilter>();
        for (int i = 0; i < meshFilters.Length; i++)
        {
            meshFilters[i].gameObject.AddComponent<MeshCollider>().convex = true;
            meshFilters[i].gameObject.AddComponent<NearInteractionGrabbable>();

        }
    }
}
