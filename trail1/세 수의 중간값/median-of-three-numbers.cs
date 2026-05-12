using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b, c) = (int.Parse(arr[0]), int.Parse(arr[1]), int.Parse(arr[2]));
        int val = (b > a && b < c) ? 1 : 0;
        Console.WriteLine(val);
    }
}
