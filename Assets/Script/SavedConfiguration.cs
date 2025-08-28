using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SavedConfiguration : MonoBehaviour
{
    [HideInInspector]
    public Configuration configuration;
    public void OnClickSavedConfiguration()
    {
        GameManager.GUIManager.ShowSavedConfiguration(configuration);
    }
    public void OnClickDeleteSavedConfiguration()
    {
        gameObject.SetActive(false);
        GameManager.GUIManager.DeleteSavedConfiguration(configuration);
    }
}
