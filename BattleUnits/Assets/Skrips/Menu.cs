using System.Net;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    [SerializeField] private GameObject BackgroundInfo;

    [SerializeField] private Text TextScore;

    private void Update()
    {
        TextScore.text = $"{DataGame.instance.Score}";
    }

    public void StartGame()
    {
        SceneManager.LoadScene("BattleUnits");
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
