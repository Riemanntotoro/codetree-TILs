using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        string[] strarr = Console.ReadLine().Split();
        var(A, B, C) = (int.Parse(strarr[0]), int.Parse(strarr[1]), int.Parse(strarr[2]));
        int[] arr = {A, B, C};
        int Median = arr.OrderBy(x => x).ElementAt(1);
        Console.WriteLine(Median);
    }
}
