using System;
using UnityEngine;

public class Save : MonoBehaviour
{
    internal static Save InstanceSave;

    private string path;

    public DataGame _DataGame = DataGame.instance;

    private void Awake()
    {
        path = Application.persistentDataPath + "/" + "GameSave";

        Initialization();

        LoadGame();
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private void OnApplicationPause(bool pause)
    {
        SaveGame();
    }

    private void OnApplicationFocus(bool focus)
    {
        SaveGame();
    }

    private void Initialization()
    {
        if (InstanceSave == null)
        {
            InstanceSave = this;

            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    internal void SaveGame()
    {
        SaveManager.Instance.Save(DataGame.instance, path, SaveComplete, false);
    }

    private void SaveComplete(SaveResult result, string massange)
    {
        if(result == SaveResult.Error)
        {
            Debug.LogError("Error Save" + massange);
        }
    }

    private void LoadGame()
    {
        SaveManager.Instance.Load<DataGame>(path, LoadComplete, false);
    }

    private void LoadComplete(DataGame data, SaveResult result, string massenge)
    {
        if(result == SaveResult.Success)
        {
            DataGame.instance.Score = data.Score;

            DataGame.instance.BoolMusic = data.BoolMusic;

            DataGame.instance.ActiveTutorial = data.ActiveTutorial;
        }

        if(result == SaveResult.Error || result == SaveResult.EmptyData) 
        {
            new DataGame();
        }
    }
}