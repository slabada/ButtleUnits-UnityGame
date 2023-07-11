using System;
using Unity.VisualScripting;

[Serializable]
public sealed class DataGame
{
    public bool BoolMusic = true;
    public int Score = 0;
    public bool ActiveTutorial = true;

    public static readonly DataGame instance = new DataGame();
}