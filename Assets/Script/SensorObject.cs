using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SensorObject : MonoBehaviour
{
    public int index;

    //Sensor child GameObject
    //------------------------------------------------
    public Transform phisicalObject;
    public GameObject SensorName;
    private GameObject temperatureSensor;
    private GameObject displacementSensor;

    public void Awake()
    {
        SensorName = transform.GetChild(1).GetChild(0).GetChild(0).gameObject;
    }

    public void Start()
    {

        phisicalObject = transform.GetChild(1).GetChild(1);

        temperatureSensor = phisicalObject.GetChild(0).gameObject;
        displacementSensor = phisicalObject.GetChild(1).gameObject;


        displacementSensor.SetActive(false);

        phisicalObject.GetChild(2).GetComponent<TextMeshPro>().text = "Ch " + GameManager.sensors[index].Channel.ToString() + " G " + GameManager.sensors[index].Gratings.ToString();
        phisicalObject.GetComponent<SensorManipulation>().index = index;


    }
    /// <summary>
    /// On click in the sensor button to change the type of sensor
    /// </summary>
    public void OnChangeSensorType()
    {
        //cambia valore nel sensor key e testo nel suo oggetto
        if (GameManager.sensors[index].measurementType == Measurement.Temperature)
        {
            GameManager.sensors[index].measurementType = Measurement.Displacement;  //info tipo nel dizionario
            SensorName.GetComponent<TextMesh>().text = Measurement.Displacement.ToString();   //scritta nel panel
            temperatureSensor.SetActive(false);
            displacementSensor.SetActive(true);
        }
        else
        {
            GameManager.sensors[index].measurementType = Measurement.Temperature;
            SensorName.GetComponent<TextMesh>().text = Measurement.Temperature.ToString();
            temperatureSensor.SetActive(true);
            displacementSensor.SetActive(false);
        }
    }
}
