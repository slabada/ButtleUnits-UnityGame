using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitIndicator : MonoBehaviour
{
    private UnitCharacteristics Unit;
    [SerializeField] private GameObject[] UnitHealth;
    [SerializeField] internal GameObject HealthPoint;
    private int HealthIndex;
    private int HealthOldIndex;
    [Space]
    [SerializeField] internal GameObject[] NumberOfMove;
    [SerializeField] internal GameObject NumberOfMovePoints;
    private int NumberOfMoveIndex;
    private int NumberOfMoveOldIndex;

    private void Start()
    {
        Unit = this.gameObject.GetComponent<UnitCharacteristics>();
    }

    private void Update()
    {
        IndicatorHealth();

        if (Unit.Move == true)
        {
            HealthPoint.SetActive(false);
            NumberOfMovePoints.SetActive(false);
        }
    }

    private void IndicatorHealth()
    {
        HealthIndex = Unit._Health;
        NumberOfMoveIndex = Unit.StartNumberMoves;

        if (UnitHealth[HealthIndex].activeSelf == false) UnitHealth[HealthIndex].SetActive(true);
        if (NumberOfMove[NumberOfMoveIndex].activeSelf == false) NumberOfMove[NumberOfMoveIndex].SetActive(true);

        if (HealthOldIndex != HealthIndex)
        {
            UnitHealth[HealthOldIndex].SetActive(false);
            HealthOldIndex = HealthIndex;     
        }
        if (NumberOfMoveOldIndex != NumberOfMoveIndex)
        {
            NumberOfMove[NumberOfMoveOldIndex].SetActive(false);
            NumberOfMoveOldIndex = NumberOfMoveIndex;
        }
    }
    private void OnMouseEnter()
    {
        if(GameManager.ActiveMenu == false && GameManager.BackgroundActive == false)
        {
            HealthPoint.SetActive(true);
            NumberOfMovePoints.SetActive(true);
        }
    }
    private void OnMouseExit()
    {
        HealthPoint.SetActive(false);
        NumberOfMovePoints.SetActive(false);
    }
}
