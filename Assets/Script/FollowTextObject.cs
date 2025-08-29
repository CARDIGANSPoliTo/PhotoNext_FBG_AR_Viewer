using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTextObject : MonoBehaviour
{
    private void Update()
    {
            transform.GetChild(2).rotation = Quaternion.LookRotation(transform.GetChild(2).position - GameManager.cameraObj.position);
            //il testo deve anche evitare collisioni ed eventualmente spostarsi in alto/basso/destra/sinistra per evitarle       
    }
}
