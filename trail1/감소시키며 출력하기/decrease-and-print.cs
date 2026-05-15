using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        foreach (int i in Enumerable.Range(5, 13).Reverse()) {
            Console.Write(i + " ");
        }
    }
}
