using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var (A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        Console.WriteLine((A >= B ? 1 : 0));
        Console.WriteLine((A > B ? 1 : 0));
        Console.WriteLine((B >= A ? 1 : 0));
        Console.WriteLine((B > A ? 1 : 0));
    }
}
