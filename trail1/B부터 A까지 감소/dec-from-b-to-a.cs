using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        foreach(int i in Enumerable.Range(A, B-A+1).Reverse()) {
            Console.Write(i + " ");
        }
    }
}
