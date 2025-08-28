using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Linq;

public class SensorManipulation : MonoBehaviour
{
    //Sensor properties
    //------------------------------------------------
    public int index;

    private const float scaledObject = 3f;
    private bool scaled = false;


    //Sensor child gameObject
    //------------------------------------------------
    private GameObject Name;
    private GameObject HeatmapPosition;

    //Object referement
    //------------------------------------------------
    private GameObject SensorList;
    private GameObject ModelStructure;
    private GameObject ModelSensor;

    private GameObject ImportedModelStructure;

    public void Awake()
    {
        SensorList = GameObject.FindGameObjectWithTag("SensorScroll");
        ModelStructure = GameManager.Model.transform.GetChild(0).gameObject;
        ModelSensor = GameManager.Model.transform.GetChild(1).gameObject;

        ImportedModelStructure = ModelStructure.transform.GetChild(0).gameObject;    //il modello importato (con gia il mesh collider convex, già figlio di model structure)
    }


    public void Start()
    {
        Name = transform.GetChild(2).gameObject;
        HeatmapPosition = transform.GetChild(3).gameObject;
    }

    /// <summary>
    /// Called when the hand is near the sensor
    /// </summary>
    public void OnHoverEntered()
    {
        if (GameManager.sensors[index].Placed)
        {
            //sensor -> bigger
            transform.localScale = transform.localScale * scaledObject;
            scaled = true;
        }
    }
    /// <summary>
    /// Called when the hand has released sensor and is far from it
    /// </summary>
    public void OnHoveredExited()
    {
        if (scaled)
        {
            transform.localScale = transform.localScale / scaledObject;
        }
    }
    /// <summary>
    /// Called when the manipulation start (grab)
    /// </summary>
    public void StartManipulation()
    {
        GameManager.GUIManager.saved = false;
        SensorList.transform.parent.GetChild(0).GetChild(2).GetChild(0).GetComponent<ButtonConfigHelper>().MainLabelText = "Save";
        SensorList.transform.parent.transform.GetChild(0).GetChild(2).GetChild(0).GetComponent<Interactable>().IsEnabled = true;
        //disattiva il textmesh nome sensore
        Name.SetActive(false);
        //no more sensorList or model child to avoid to have a child object even if the object is not placed properly
        transform.parent = null;

        //disattivare lo scroll
        SensorList.GetComponent<ScrollingObjectCollection>().CanScroll = false;   //solo scroll

        //attiva il collider dell'aereo per il trigger
        //ImportedModelStructure.GetComponent<BoxCollider>().enabled = true;
    }
    /// <summary>
    /// Called when the manipulation end (grab)
    /// </summary>
    public void EndManipulation()
    {
        //attivare lo scroll
        SensorList.GetComponent<ScrollingObjectCollection>().CanScroll = true;
        //if the object enter in the collider of the plane, stick the object to the nearest point in the model
        //if (ImportedModelStructure.GetComponent<ModelTrigger>().near)
        //{           
        float Maxdistance = 300f;
        Vector3 position = new Vector3();

        //find all meshes of the fbx
        MeshCollider[] meshColliders = ImportedModelStructure.GetComponentsInChildren<MeshCollider>();

        for (int i = 0; i < meshColliders.Length; i++)   //mesh collider of the plane is in the child of the model
        {
            Vector3 tempPosition = meshColliders[i].ClosestPoint(transform.position);

            float distance = Vector3.Distance(transform.position, tempPosition);

            if (distance < Maxdistance) //find the nearest point in all subelements of the model
            {
                Maxdistance = distance;
                position = tempPosition;
            }
        }
        //RaycastHit hit;
        Vector3 startingPosition = transform.position;
        Vector3 direction = (position - startingPosition).normalized;

        //i collider non sono piu convex
        SetMeshConvex(false, meshColliders);

        if (!SetSensor(startingPosition, direction))
        {
            //posso lanciare 6 ray dal cubo per ogni direzione, trovare il piu vicino e fare lo stesso da dentro il collider
            Vector3[] directions = new Vector3[] { Vector3.down, Vector3.up, Vector3.left, Vector3.right, Vector3.forward, Vector3.back, 
                Vector3.down + Vector3.left, Vector3.down + Vector3.right, Vector3.down + Vector3.forward, Vector3.down + Vector3.back,
                Vector3.up + Vector3.left, Vector3.up + Vector3.right, Vector3.up + Vector3.forward, Vector3.up + Vector3.back,
                Vector3.left + Vector3.forward, Vector3.left + Vector3.back,
                Vector3.right + Vector3.forward, Vector3.right + Vector3.back
            };

            RaycastHit hit;
            RaycastHit finalHit = new RaycastHit();
            bool first = true;
            for (int i = 0; i < directions.Length; i++)
            {
                if (Physics.Raycast(transform.position, directions[i], out hit))
                {
                    if (first)
                    {
                        finalHit = hit;
                        first = false;
                    }
                    else
                    {
                        //calcolo l'hit con distanza minore
                        if (hit.distance < finalHit.distance)
                        {
                            finalHit = hit;
                        }
                    }

                }
            }
            direction = (finalHit.point - startingPosition).normalized;
            SetSensor(startingPosition, direction);
        }

        //i collider non sono piu convex
        SetMeshConvex(true, meshColliders);
    }
    /// <summary>
    /// Method to set convex option to all colliders
    /// </summary>
    /// <param name="value"></param>
    /// <param name="meshColliders"></param>
    private void SetMeshConvex(bool value, MeshCollider[] meshColliders)
    {
        foreach (MeshCollider m in meshColliders)
        {
            m.convex = value;
        }
    }

    private bool SetSensor(Vector3 startingPosition, Vector3 direction)
    {
        RaycastHit hit;
        //int layer_mask = LayerMask.GetMask("Model");
        if (Physics.Raycast(startingPosition, direction, out hit/*,Mathf.Infinity, layer_mask*/))
        {
            Debug.Log("HIT");
            //Debug.DrawLine(startingPosition, hit.point, Color.green, 600, false);
            transform.position = hit.point - (-hit.normal * transform.GetChild((int)GameManager.sensors[index].measurementType).lossyScale.x / 2f); //offset in base alla dimensione del cubo (fai vaiabile in base a ridimensionamento)  
            transform.rotation = Quaternion.FromToRotation(Vector3.up, hit.normal);

            transform.SetParent(ModelSensor.transform, true);

            //scale the sensor to be little when attached to the model
            transform.localScale = transform.localScale / scaledObject;
            scaled = false;
            transform.position = hit.point - (-hit.normal * transform.GetChild((int)GameManager.sensors[index].measurementType).lossyScale.x / 2f);

            GameManager.sensors[index].Placed = true;
            GameManager.sensors[index].Position = hit.point;

            HeatmapPosition.transform.position = hit.point;

            //mostra nome sensore
            Name.SetActive(true);  //attiva renderizzazione nome
            return true;
        }
        else
        {
            Debug.Log("MISS");
            GameManager.sensors[index].Placed = false;
            return false;
        }
    }
}


