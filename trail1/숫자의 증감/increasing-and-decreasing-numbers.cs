using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(C, N) = ((arr[0]), int.Parse(arr[1]));
        if (C == "A") {
            Console.WriteLine(string.Join(" ", Enumerable.Range(1, N)));
        }
        if (C == "D") {
            Console.WriteLine(string.Join(" ", Enumerable.Range(1, N).Reverse()));
        }
    }
}
