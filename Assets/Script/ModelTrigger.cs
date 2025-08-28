using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelTrigger : MonoBehaviour
{
    public bool near = false;
    //public Vector3 position;
    // Start is called before the first frame update

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log("ENTRATo");
        near = true;
    }
    private void OnTriggerExit(Collider other)
    {
        //Debug.Log("ENTRATo");
        near = false;
    }
    
    private void OnTriggerStay(Collider other)
    {
        //position = other.ClosestPoint(other.transform.position);
        near = true;    //solo oggetto, non il panel
    }

}
