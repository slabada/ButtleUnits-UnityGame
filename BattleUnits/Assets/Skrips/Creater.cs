using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class Creater : MonoBehaviour
{
    [SerializeField] internal GameManager GameManager;

    [SerializeField] internal int Count;

    [SerializeField] private GameObject Prefab;

    [SerializeField] internal GameObject FlyUnit;

    [Space]

    [SerializeField] private int CountPlus;

    [SerializeField] internal GameObject FlyPlus;

    [SerializeField] private GameObject PlusMovePrefab;

    [SerializeField] private GameObject PlusHealthPrefab;

    [Space]

    [SerializeField] internal bool CreaterActive = false;

    [Space]

    [SerializeField] private AudioSource AudioClick;

    private void Start()
    {
        GameManager = GetComponent<GameManager>();
    }

    private void Update()
    {
        UnitInstallation();

        MoveFlyPrefab();

        CheckIntersection();
    }

    public void PlusHealth(int Health)
    {
        CountPlus = Health;

        GameManager.BackgroundActive = false;

        CreaterActive = true;

        FlyPlus = Instantiate(PlusHealthPrefab);
    }

    public void PlusMove(int Move)
    {
        CountPlus = Move; 

        GameManager.BackgroundActive = false;

        CreaterActive = true;

        FlyPlus = Instantiate(PlusMovePrefab);
    }

    public void CreaterUnit(GameObject UnitPrefab)
    {
        GameManager.BackgroundActive = false;

        CreaterActive = true;

        Prefab = UnitPrefab;

        FlyUnit = Instantiate(UnitPrefab);

        FlyUnit.tag = "CreaterUnit";

        GameManager.Units.Add(FlyUnit);
    }

    private void UnitInstallation()
    {
        UnitCharacteristics PlusUnit;

        if (FlyPlus != null && CountPlus > 0)
        {
            if (Input.GetMouseButtonDown(0))
            {
                Vector3 MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition); // Координаты курсора

                MousePos.z = 0f; // Обнуление оси Z 

                RaycastHit2D hit = Physics2D.Raycast(MousePos, -Vector2.up); // Получаем инфу про объект котороая записывается в hit

                if (hit.transform.tag == "Unit")
                {
                    PlusUnit = hit.transform.GetComponent<UnitCharacteristics>();

                    if(FlyPlus.tag == "PlusMove")
                    {
                        PlusUnit.StartNumberMoves++;

                        CountPlus--;
                    }

                    if(FlyPlus.tag == "PlusHealth")
                    {
                        PlusUnit._Health++;

                        CountPlus--;
                    }
                }
            }

            if (CountPlus == 0)
            {
                Destroy(FlyPlus);

                GameManager.StartSpawnEnemy();

                GameManager.PlacementMode = false;
            }
        }


        if (Input.GetMouseButtonDown(0))
        {
            if (FlyUnit != null && FlyUnit.GetComponent<UnitCharacteristics>().Intersection == false)
            {
                if (FlyUnit.GetComponent<UnitCharacteristics>().QuantityCreater != Count && CreaterActive == true)
                {
                    Count++;

                    FlyUnit.GetComponent<UnitCharacteristics>().enabled = true;

                    FlyUnit.GetComponent<Attack>().enabled = true;

                    FlyUnit.GetComponent<UnitIndicator>().enabled = true;

                    FlyUnit.tag = "Unit";

                    FlyUnit = null;

                    AudioClick.Play();

                    CreaterUnit(Prefab);
                }

                if (FlyUnit.GetComponent<UnitCharacteristics>().QuantityCreater == Count)
                {
                    Prefab = null;

                    Destroy(FlyUnit);

                    if (GameManager.ActiveStartGame == true)
                    {
                        GameManager.Count++;
                    }

                    GameManager.StartGames();

                    Count = 0;
                }
            }
        }
        else if (FlyUnit == null)
        {
            CreaterActive = false;
        }
    }

    private void MoveFlyPrefab()
    {
        Vector3 MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition); // Координаты курсора
        MousePos.z = 0f; // Обнуление оси Z 

        if (FlyUnit != null)
        {
            FlyUnit.transform.position = MousePos;
        }
        if(FlyPlus != null) 
        {
            FlyPlus.transform.position = MousePos;
        }
    }

    private void CheckIntersection()
    {
        if(FlyUnit != null && GameManager.PlacementMode == true)
        {
            if (FlyUnit.GetComponent<UnitCharacteristics>().Intersection == true)
            {
                FlyUnit.GetComponent<SpriteRenderer>().color = Color.red;
            }
            else if(FlyUnit.GetComponent<UnitCharacteristics>().Intersection == false)
            {
                FlyUnit.GetComponent<SpriteRenderer>().color = Color.white;
            }
        }
    }
}
