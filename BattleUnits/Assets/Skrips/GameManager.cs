using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    internal int Count = 0;

    private int CountSpawnEnemy = 2;

    internal bool ActiveStartGame = true;

    static internal bool PlacementMode = true;

    [SerializeField] private GameObject[] CardsPoint_1;

    [SerializeField] private GameObject[] CardsPoint_2;

    [SerializeField] private GameObject[] CardsPoint_3;

    [Space]

    [SerializeField] private GameObject Background;

    [SerializeField] static internal bool BackgroundActive;

    [Space]

    [SerializeField] private GameObject[] SpawnPointEnemy;

    [SerializeField] private GameObject[] PrefabEnemy;

    [Space]

    [SerializeField] internal List<GameObject> Enemys;

    [SerializeField] internal List<GameObject> Units;

    [Space]

    [SerializeField] private Text TextCountKill;

    [SerializeField] internal int Score;

    [SerializeField] private GameObject GameOverMenu;

    [Space]

    [SerializeField] private GameObject BackgroundPause;

    [SerializeField] private GameObject ButtonMenu;

    [SerializeField] private Text MenuTextCountKill;

    [SerializeField] static internal bool ActiveMenu = false;

    [Space]

    [SerializeField] private GameObject BackgroundInfo;

    private void Awake()
    {
        if(DataGame.instance.ActiveTutorial == false) StartGames();
    }

    private void Update()
    {
        if(ActiveMenu == true)
        {
            Time.timeScale = 0;
        }
        else
        {
            Time.timeScale = 1;
        }

        Remove();

        ActiveBackground();

        CheckEnemy();

        GameOver();

        if (BackgroundActive == false)
        {
            for (int i = 0; i < CardsPoint_1.Length; i++)
            {
                CardsPoint_1[i].SetActive(false);
                CardsPoint_2[i].SetActive(false);
                CardsPoint_3[i].SetActive(false);
            }
        }

        MenuTextCountKill.text = $"{Score}";
    }

    private void SaveScore()
    {
        if(Score > DataGame.instance.Score)
        {
            DataGame.instance.Score = Score;
        }

        Save.InstanceSave.SaveGame();
    }

    private void CheckEnemy()
    {
        if (Enemys.Count == 0 && ActiveStartGame == false && PlacementMode == false)
        {
            CountSpawnEnemy += 2;

            BackgroundActive = true;

            CardActive();

            PlacementMode = true;
        }
    }

    internal void StartSpawnEnemy()
    {
        for (int i = 0; i < CountSpawnEnemy; i++)
        {
            Enemys.Add(Instantiate(PrefabEnemy[Random.Range(0, PrefabEnemy.Length)], SpawnPointEnemy[Random.Range(0, SpawnPointEnemy.Length)].transform));
        }
    }

    internal void StartGames()
    {
        if (Count == 3)
        {
            ActiveStartGame = false;

            PlacementMode = false;

            StartSpawnEnemy();
        }

        if (ActiveStartGame == true)
        {
            BackgroundActive = true;

            CardActive();

            PlacementMode = true;
        }
    }

    private void CardActive()
    {
        if (BackgroundActive == true)
        {
            if(ActiveStartGame == true)
            {
                CardsPoint_1[Random.Range(0, 6)].SetActive(true);
                CardsPoint_2[Random.Range(0, 6)].SetActive(true);
                CardsPoint_3[Random.Range(0, 6)].SetActive(true);
            }
            else
            {
                CardsPoint_1[Random.Range(0, CardsPoint_1.Length)].SetActive(true);
                CardsPoint_2[Random.Range(0, CardsPoint_2.Length)].SetActive(true);
                CardsPoint_3[Random.Range(0, CardsPoint_3.Length)].SetActive(true);
            }
        }
    }

    private void ActiveBackground()
    {
        if (BackgroundActive == true)
        {
            Background.SetActive(true);
        }
        else if (BackgroundActive == false)
        {
            Background.SetActive(false);
        }
    }

    private void Remove()
    {
        if (Units.Count != 0)
        {
            for (int i = 0; i < Units.Count; i++)
            {
                if (Units[i] == null) Units.RemoveAt(i);
            }
        }
        if (Enemys.Count != 0)
        {
            for (int i = 0; i < Enemys.Count; i++)
            {
                if (Enemys[i] == null) Enemys.RemoveAt(i);
            }
        }
    }

    private void GameOver()
    {
        if(Units.Count == 0 && ActiveStartGame == false && PlacementMode == false)
        {
            TextCountKill.text = $"{Score}";

            ActiveMenu = false;

            ButtonMenu.SetActive(false);

            GameOverMenu.SetActive(true);
        }
    }

    public void InMenu()
    {
        ActiveMenu = false;

        SaveScore();

        SceneManager.LoadScene("Menu");
    }

    public void Pause()
    {
        ActiveMenu = true;

        ButtonMenu.SetActive(false);

        BackgroundPause.SetActive(true);

    }

    public void Restart()
    {
        ActiveMenu = false;

        SceneManager.LoadScene("BattleUnits");
    }

    public void ExitPause()
    {
        ActiveMenu = false;

        BackgroundPause.SetActive(false);

        ButtonMenu.SetActive(true);
    }

    public void Info()
    {
        BackgroundInfo.SetActive(true);
    }

    public void ExitInfo()
    {
        BackgroundInfo.SetActive(false);
    }
}
