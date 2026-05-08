using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        if (N >= 3000) {Console.WriteLine("book");}
        else if (N >= 1000) {Console.WriteLine("mask");}
        else {Console.WriteLine("no");}
    }
}
