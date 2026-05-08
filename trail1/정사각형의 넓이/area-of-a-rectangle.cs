using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        Console.WriteLine(N*N);
        if (N < 5) {Console.WriteLine("tiny");}
    }
}
