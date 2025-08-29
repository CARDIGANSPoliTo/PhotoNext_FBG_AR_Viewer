using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class Import3DModel : MonoBehaviour
{
    public void OnClickModel()
    {
        GameManager.GUIManager.ImportModelName(gameObject.GetComponent<ButtonConfigHelper>().MainLabelText);
    }
}
