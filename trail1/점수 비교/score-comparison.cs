using System;

public class Codetree
{  
    public static void Main()
    {
        string[] lstA = Console.ReadLine().Split();
        string[] lstB = Console.ReadLine().Split();
        var (AM, AE) = (int.Parse(lstA[0]), int.Parse(lstA[1]));
        var (BM, BE) = (int.Parse(lstB[0]), int.Parse(lstB[1]));
        int val = (AM > BM) & (AE > BE) ? 1 : 0;
        Console.WriteLine(val);
    }
}
