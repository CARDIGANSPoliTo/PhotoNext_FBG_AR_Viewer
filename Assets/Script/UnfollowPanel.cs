using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnfollowPanel : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        transform.rotation = Quaternion.LookRotation(transform.position - GameManager.cameraObj.position);
    }
}
