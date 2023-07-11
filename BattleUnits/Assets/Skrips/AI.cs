using UnityEngine;

public class AI : MonoBehaviour
{
    [SerializeField] private float Speed;

    private GameManager GameManager;

    internal bool Move = false;

    internal float Position;

    internal Transform Target;

    private void Start()
    {
        GameManager = Camera.main.GetComponent<GameManager>();

        SetNewTarget();
    }

    private void Update()
    {
        if (Target == null) Target = SetNewTarget();

        if (Target != null) TargetMove();
    }

    private void TargetMove()
    {
        if(Vector3.Distance(this.transform.position, Target.transform.position) > 1f)
        {
            Move = true;

            float journeyLength = Vector3.Distance(this.transform.position, Target.transform.position);

            float distCovered = Time.deltaTime * Speed;

            float fracJourney = distCovered / journeyLength;

            this.transform.position = Vector3.Lerp(this.transform.position, Target.transform.position, fracJourney);
        }
        else if (Vector3.Distance(this.transform.position, Target.transform.position) < 1f)
        {
            Position = 0;

            Move = false;
        }
    }

    private Transform SetNewTarget()
    {
        float closest = 1000;

        Transform Target = null;

        for (int i = 0; i < GameManager.Units.Count; i++)
        {
            if(GameManager.Units[i] != null)
            {
                float dist = Vector3.Distance(GameManager.Units[i].transform.position, this.transform.position);

                if (dist < closest)
                {
                    closest = dist;

                    Target = GameManager.Units[i].transform;
                }
            }
        }

        return Target;
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Wall")
        {
            Speed = 0.25f;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        Speed = 1;
    }
}
