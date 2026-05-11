using System;

public class Codetree
{  
    public static void Main()
    {
        int A = int.Parse(Console.ReadLine());
        string[] arr = Console.ReadLine().Split();
        var(B, C, D, E) = (int.Parse(arr[0]), int.Parse(arr[1]), int.Parse(arr[2]), int.Parse(arr[3]));
        Console.WriteLine(A > B ? 1 : 0);
        Console.WriteLine(A > C ? 1 : 0);
        Console.WriteLine(A > D ? 1 : 0);
        Console.WriteLine(A > E ? 1 : 0);
    }
}
