using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UnitMenu : MonoBehaviour
{
    [SerializeField] private GameObject Menu;
    [SerializeField] private ReceivingObjectRay ReceivingObjectRay;

    private void Update()
    {
        if(ReceivingObjectRay.UnitCharacteristics != null)
        {
            Menu.SetActive(true);
        }
        else
        {
            Menu.SetActive(false);
        }
    }

    public void OnButton_1()
    {
        ReceivingObjectRay.UnitCharacteristics.Move = !ReceivingObjectRay.UnitCharacteristics.Move;
        ReceivingObjectRay.Attack.TargetAttack = null;
    }
    public void OnButton_2()
    {
        if (ReceivingObjectRay.UnitCharacteristics.PrefabPoints.Count == 0)
        {
            ReceivingObjectRay.UnitIndicator.HealthPoint.SetActive(false);
            ReceivingObjectRay.UnitIndicator.NumberOfMovePoints.SetActive(false);
            ReceivingObjectRay.UnitCharacteristics = null;
            ReceivingObjectRay.OldUnitIndicator = null;
        }

        if (ReceivingObjectRay.UnitCharacteristics != null && ReceivingObjectRay.UnitCharacteristics.Points.Count > 0)
        {
            ReceivingObjectRay.UnitCharacteristics.Points.Clear();
            ReceivingObjectRay.UnitCharacteristics.StartPoints = Vector3.zero;
            for (int i = 0; i < ReceivingObjectRay.UnitCharacteristics.PrefabPoints.Count; i++)
            {
                Destroy(ReceivingObjectRay.UnitCharacteristics.PrefabPoints[i]);
            }
            ReceivingObjectRay.UnitCharacteristics.PrefabPoints.Clear();
            ReceivingObjectRay.UnitCharacteristics.StartNumberMoves += ReceivingObjectRay.UnitCharacteristics.EndNumberMoves;
            ReceivingObjectRay.UnitCharacteristics.EndNumberMoves = 0;
        }
    }
}
