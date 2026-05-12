using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int score = 0;
        if (a >= 90 && b >= 95) {score = 100000;}
        else if (a >= 90 && b >= 90) {score = 50000;}
        Console.WriteLine(score);
    }
}
