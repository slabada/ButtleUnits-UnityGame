using UnityEngine;

public class ReceivingObjectRay : MonoBehaviour
{
    [SerializeField] private Creater Creater;

    [SerializeField] internal UnitCharacteristics UnitCharacteristics;
    [SerializeField] internal UnitIndicator UnitIndicator;
    [SerializeField] internal Attack Attack;
    internal UnitIndicator OldUnitIndicator;

    private void Start()
    {
        Creater= GetComponent<Creater>();
    }

    private void Update()
    {
        ReceivingObject();
        CreatPointMove();

        if (UnitCharacteristics == null)
        {
            UnitIndicator = null;
            OldUnitIndicator= null;
            Attack = null;
        }

        if (UnitCharacteristics != null && UnitCharacteristics.Move == true)
        {
            UnitCharacteristics = null;
            UnitIndicator = null;
            OldUnitIndicator = null;
            Attack = null;
        }
        if (UnitCharacteristics != null && UnitCharacteristics.StartNumberMoves == 0 && UnitCharacteristics.EndNumberMoves == 0)
        {
            UnitCharacteristics = null;
            UnitIndicator = null;
            OldUnitIndicator = null;
            Attack = null;
        }
    }

    private void ReceivingObject()
    {
        if(Input.GetMouseButtonDown(0))
        {
            Vector3 MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition); // Координаты курсора
            MousePos.z = 0f; // Обнуление оси Z 
            RaycastHit2D hit = Physics2D.Raycast(MousePos, -Vector2.up); // Получаем инфу про объект котороая записывается в hit

            if (hit.transform.CompareTag("Unit") && Creater.CreaterActive == false && GameManager.PlacementMode == false && GameManager.ActiveMenu == false && GameManager.BackgroundActive == false)
            {
                if (UnitIndicator != null && hit.transform == UnitIndicator.transform)
                {
                    return;
                }

                if (OldUnitIndicator != UnitIndicator)
                {
                    Camera.main.GetComponent<UnitMenu>().OnButton_2();

                    UnitIndicator.HealthPoint.SetActive(false);
                    UnitIndicator.NumberOfMovePoints.SetActive(false);
                }
                OldUnitIndicator = UnitIndicator;

                UnitIndicator = hit.transform.GetComponent<UnitIndicator>();
                UnitCharacteristics = hit.transform.GetComponent<UnitCharacteristics>();
                Attack = hit.transform.GetComponent<Attack>();
            }
        }
    }

    private void CreatPointMove()
    {
        if(UnitCharacteristics != null && UnitIndicator != null)
        {
            UnitCharacteristics.SetMovePoints();
            UnitIndicator.HealthPoint.SetActive(true);
            UnitIndicator.NumberOfMovePoints.SetActive(true);
        }
    }
}