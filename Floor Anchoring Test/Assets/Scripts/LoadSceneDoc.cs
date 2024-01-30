using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEditor.SceneManagement;

public class LoadSceneDoc : MonoBehaviour, IMixedRealityPointerHandler
{
    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
        if (eventData.Pointer is SpherePointer)
        {
            SceneManager.LoadScene("Assets/Scenes/Doctor View.unity", LoadSceneMode.Single);
            //EditorSceneManager.LoadSceneInPlayMode("Assets/Scenes/DoctorViewPatient.unity", new LoadSceneParameters(LoadSceneMode.Single));
        }
    }

    public void OnPointerClicked(MixedRealityPointerEventData eventData) { }
    public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
    public void OnPointerUp(MixedRealityPointerEventData eventData) { }
}
