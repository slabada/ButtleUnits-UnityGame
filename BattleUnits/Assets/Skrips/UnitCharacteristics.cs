using System;
using System.Collections.Generic;
using UnityEngine;

public class UnitCharacteristics : MonoBehaviour
{
    internal int EndNumberMoves;

    [SerializeField] internal int StartNumberMoves;

    [SerializeField] internal int _Health;

    [SerializeField] internal int Damage;

    [SerializeField] private float MoveSpeed;

    [SerializeField] internal int QuantityCreater;

    [Space]

    [SerializeField] private GameObject PointIMG;

    internal Vector3 StartPoints;

    private Vector3 MousePos;

    internal List<Vector3> Points = new List<Vector3>();

    internal List<GameObject> PrefabPoints = new List<GameObject>();

    internal bool Move = false;

    internal bool Intersection = false;

    [Range(0, 1)]
    internal float Position = 0f;

    private int index = 0;

    private void Update()
    {
        Health();

        if (Move == true)
        {
            UnitMove();
        }
    }

    private void UnitMove()
    {
        Move = true;

        Trajectory();

        for (int i = 0; i < PrefabPoints.Count; i++)
        {
            Destroy(PrefabPoints[i]);
        }

        PrefabPoints.Clear();
    }

    private void Health()
    {
        if (_Health >= 12) _Health = 12;

        if (_Health <= 0)
        {
            Points.Clear();

            for (int i = 0; i < PrefabPoints.Count; i++)
            {
                Destroy(PrefabPoints[i]);
            }

            PrefabPoints.Clear();

            _Health = 0;

            Destroy(this.gameObject);
        }
    }

    internal void SetMovePoints()
    {
        if (Move == false)
        {
            if (Input.GetMouseButtonDown(0))
            {
                StartPoints = this.transform.position;
            }

            if (Input.GetMouseButton(0))
            {
                MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition); // Координаты курсора

                MousePos.z = 0f; // Обнуление оси Z 

                if (StartNumberMoves > 0)
                {
                    if (Vector2.Distance(StartPoints, MousePos) > 0.9f && Vector2.Distance(StartPoints, MousePos) < 1.1f)
                    {
                        PrefabPoints.Add(Instantiate(PointIMG, new Vector2(MousePos.x, MousePos.y), Quaternion.identity));

                        Points.Add(MousePos);

                        StartPoints = Points[Points.Count - 1];

                        StartNumberMoves--;

                        EndNumberMoves++;
                    }
                }
            }

            if (Input.GetMouseButtonUp(0))
            {
                MousePos = Vector3.zero;

                if (Points.Count > 0)
                {
                    Points.Insert(0, this.transform.position);
                }
            }
        }
    }

    internal void Trajectory()
    {
        if (this.transform.position != Points[index])
        {
            this.transform.position = Vector3.MoveTowards(StartPoints, Points[index], Position += Time.deltaTime * MoveSpeed);
        }
        else
        {
            if (index < Points.Count - 1)
            {
                index++;

                Position = 0;

                StartPoints = this.transform.position;
            }
        }
        if (this.transform.position == Points[EndNumberMoves])
        {
            StartPoints = Vector3.zero;

            MousePos = Vector3.zero;

            Move = false;

            EndNumberMoves = 0;

            Position = 0;

            index = 0;

            Points.Clear();
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Unit"))
        {
            Intersection = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        Intersection = false;
    }
}
