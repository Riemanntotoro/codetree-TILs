using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b, c) = (int.Parse(arr[0]), int.Parse(arr[1]), int.Parse(arr[2]));
        int val = a;
        if (b > val) {val = b;}
        if (c > val) {val = c;}
        Console.WriteLine(val);
    }
}
