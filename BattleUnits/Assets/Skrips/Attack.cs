using UnityEngine;

public class Attack : MonoBehaviour
{
    private UnitCharacteristics UnitCharacteristics;

    private GameManager GameManager;

    [SerializeField] internal Transform TargetAttack;

    [SerializeField] private float Times;

    [SerializeField] private float _Times;

    [SerializeField] private float DistanteAttack = 0.5f;

    [Header("1 - ближний бой")]
    [Header("0 - дальний бой")]

    [SerializeField] private bool TypeUnit = true;

    [SerializeField] private GameObject Ammunition = null;

    [SerializeField] private GameObject FlyAmmunition;

    [Range(0, 1)]
    private float Position = 0f;

    [Space]

    [SerializeField] private AudioSource AudioAttack;

    private void Start()
    {
        _Times = Times;

        UnitCharacteristics = GetComponent<UnitCharacteristics>();

        GameManager = Camera.main.GetComponent<GameManager>();
    }

    private void Update()
    {
        UnitAttack(TypeUnit);

        Timer();

        if(TypeUnit == false && TargetAttack == null)
        {
            Destroy(FlyAmmunition);
        }
    }

    private void UnitAttack(bool TypeUnit)
    {
        if (UnitCharacteristics.Move == true) TargetAttack = null;

        if (TypeUnit == true)
        {
            if (TargetAttack == null) TargetAttack = SetNewTarget(TypeUnit);

            if (TargetAttack != null && UnitCharacteristics.Move == false)
            {
                if (Vector3.Distance(this.transform.position, TargetAttack.transform.position) > 1f)
                {
                    this.transform.position = Vector3.MoveTowards(this.transform.position, TargetAttack.transform.position, Position += Time.deltaTime * 0.01f);
                }
            }
        }

        if (TypeUnit == false)
        {

            if (TargetAttack == null)
            {
                Times = _Times;

                TargetAttack = SetNewTarget(TypeUnit);
            }

            if (TargetAttack != null && Ammunition != null)
            {
                if (FlyAmmunition != null)
                {
                    FlyAmmunition.transform.position = Vector3.MoveTowards(FlyAmmunition.transform.position, TargetAttack.transform.position, Time.deltaTime * 5f);

                    if (Vector3.Distance(FlyAmmunition.transform.position, TargetAttack.transform.position) < DistanteAttack)
                    {
                        Destroy(FlyAmmunition);

                        TargetAttack.GetComponent<Enemy>()._Health -= UnitCharacteristics.Damage;
                    }

                    if (FlyAmmunition.transform.position == TargetAttack.transform.position) Destroy(FlyAmmunition);
                }
            }
        }
    }

    private float Timer()
    {
        if (TargetAttack != null && UnitCharacteristics.Move == false)
        {
            if (Times > 0) Times -= Time.deltaTime;

            if (Times <= 0)
            {
                Times = _Times;

                if (TypeUnit == true)
                {
                    if (TargetAttack.GetComponent<AI>().Move == false)
                    {
                        AudioAttack.Play();

                        TargetAttack.GetComponent<Enemy>()._Health -= UnitCharacteristics.Damage;
                    }
                }
                if (TypeUnit == false)
                {
                    if (FlyAmmunition == null)
                    {
                        FlyAmmunition = Instantiate(Ammunition, this.transform.position, Quaternion.identity);

                        AudioAttack.Play();

                        FlyAmmunition.transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, Mathf.Atan2(TargetAttack.transform.position.y - transform.position.y, TargetAttack.transform.position.x - transform.position.x) * Mathf.Rad2Deg - 90);
                    }
                }
            }
        }

        return Times;
    }

    private Transform SetNewTarget(bool TypeUnit)
    {
        Transform Target = null;

        if (TypeUnit == true)
        {
            for (int i = 0; i < GameManager.Enemys.Count; i++)
            {
                if (GameManager.Enemys[i] != null)
                {
                    if (Vector3.Distance(GameManager.Enemys[i].transform.position, this.transform.position) < 2)
                    {
                        Target = GameManager.Enemys[i].transform;
                    }
                }
            }
        }
        if (TypeUnit == false)
        {
            for (int i = 0; i < GameManager.Enemys.Count; i++)
            {
                if (GameManager.Enemys[i] != null)
                {
                    if (Vector3.Distance(GameManager.Enemys[i].transform.position, this.transform.position) < 5)
                    {
                        Target = GameManager.Enemys[i].transform;
                    }
                }
            }
        }

        return Target;
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Wall" && TypeUnit == false)
        {
            DistanteAttack = 2;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if(TypeUnit == false)
        {
            DistanteAttack = 0.5f;
        }
    }
}
