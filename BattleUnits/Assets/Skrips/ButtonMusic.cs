using UnityEngine;
using UnityEngine.UI;

public class ButtonMusic : MonoBehaviour
{
    [SerializeField] private Button ButtenMusic;

    [SerializeField] private Sprite YesMusic;

    [SerializeField] private Sprite NoMusic;

    private void Update()
    {
        if (DataGame.instance.BoolMusic == true)
        {
            ButtenMusic.image.sprite = YesMusic;

            AudioListener.volume = 1;
        }
        else
        {
            ButtenMusic.image.sprite = NoMusic;

            AudioListener.volume = 0;
        }
    }

    public void Music()
    {
        DataGame.instance.BoolMusic = !DataGame.instance.BoolMusic;
    }
}
