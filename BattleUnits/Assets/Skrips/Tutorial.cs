using System;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;

public class Tutorial : MonoBehaviour
{
    [SerializeField] private GameManager GameManager;
    [SerializeField] private GameObject[] TutorList;
    [SerializeField] private GameObject RightButton;
    [SerializeField] private GameObject LeftButton;
    [SerializeField] private int Count = 0;

    private void Awake()
    {
        this.gameObject.SetActive(DataGame.instance.ActiveTutorial);
    }

    private void Start()
    {
        GameManager = Camera.main.GetComponent<GameManager>();
    }

    private void Update()
    {
        TutorList[Count].SetActive(true);
        
        if (Count == TutorList.Count() - 1)
        {
            RightButton.SetActive(false);
        }
        else
        {
            RightButton.SetActive(true);
        }
        
        if (Count == 0)
        {
            LeftButton.SetActive(false);
        }
        else
        {
            LeftButton.SetActive(true);
        }
    }

    public void Right()
    {
        if (Count != TutorList.Count() - 1)
        {
            Count++;
            
            if(Count != 0 && TutorList[Count - 1].activeSelf == true) TutorList[Count - 1].SetActive(false);
        }
    }
    
    public void Left()
    {
        if (Count != 0)
        {
            Count--;

            if(Count != TutorList.Count() && TutorList[Count + 1].activeSelf == true) TutorList[Count + 1].SetActive(false);
        }
    }

    public void Exit()
    {
        this.gameObject.SetActive(false);
        DataGame.instance.ActiveTutorial = false;
        GameManager.StartGames();
    }
}
