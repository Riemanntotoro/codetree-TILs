using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int val1 = a < b ? 1 : 0;
        int val2 = a == b ? 1 : 0;
        Console.WriteLine(val1 + " " + val2);
    }
}
