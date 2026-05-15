using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        foreach (int i in Enumerable.Range(1, N).Reverse()) {
            Console.Write(i + " ");
        }
    }
}
