using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Playables;

public class Enemy : MonoBehaviour
{
    private AI AI;

    GameManager gameManager;

    [SerializeField] internal int _Health;

    [SerializeField] private int Damage = 1;

    private int OldHealth;

    [SerializeField] GameObject[] EnemyHealth;

    [SerializeField] GameObject PointHealth;

    [SerializeField] private float Times = 5;

    [Space]

    [SerializeField] private AudioSource AudioAttack;

    private void Start()
    {
        AI = GetComponent<AI>();

        gameManager = Camera.main.GetComponent<GameManager>();
    }

    private void Update()
    {
        Health();

        Activehealth();

        if (AI.Move == false) Attack();
    }

    private void Attack()
    {
        if(Times > 0) Times -= Time.deltaTime;

        if(Times <= 0)
        {
            Times = 5;

            if(AI.Target != null && AI.Move == false)
            {
                AudioAttack.Play();

                AI.Target.gameObject.GetComponent<UnitCharacteristics>()._Health -= Damage;
            }
        }
    }

    internal void Health()
    {
        if (_Health >= 12) _Health = 12;

        if (_Health <= 0)
        {
            _Health = 0;

            gameManager.Score++;

            Destroy(this.gameObject);
        }
    }

    private void Activehealth()
    {
        if (EnemyHealth[_Health].activeSelf == false) EnemyHealth[_Health].SetActive(true);
        
        if(OldHealth != _Health)
        {
            EnemyHealth[OldHealth].SetActive(false);

            OldHealth = _Health;
        }
    }

    private void OnMouseEnter()
    {
        if(GameManager.ActiveMenu == false)
        {
            PointHealth.SetActive(true);
        }
    }
    private void OnMouseExit()
    {
        PointHealth.SetActive(false);
    }
}
