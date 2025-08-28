using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class Sensor
{

    // Private Variables
    //-----------------------------------------------------------------------------
    private Vector3 position;

    //public float MaxWavelenght;

    // Public Properties
    //-----------------------------------------------------------------------------
    public int Channel { get; set; }
    public int Gratings { get; set; }
    public double Wavelength { get; set; }
    public double WavelengthIdle { get; set; }
    public  Measurement measurementType { get;  set; }
    public Vector3 Position
    {
        get
        {
            return position;
        }
        set
        {
            position = value;
        }
    }

    public bool Placed = false;
    public double division;

    public Sensor(int ch, int g)
    {
        Channel = ch;
        Gratings = g;
        measurementType = Measurement.Temperature;
    }
}
