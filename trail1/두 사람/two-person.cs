using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        string[] brr = Console.ReadLine().Split();
        var(a1, a2) = (int.Parse(arr[0]), arr[1]);
        var(b1, b2) = (int.Parse(brr[0]), brr[1]);
        int val = (a1 >= 19 && a2 == "M") || (b1 >= 19 && b2 == "M") ? 1 : 0;
        Console.WriteLine(val);
    }
}
