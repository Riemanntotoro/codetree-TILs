using System;

public class Codetree
{  
    public static void Main()
    {
    int N = int.Parse(Console.ReadLine());
    for (int i=1; i<=N; i++) {
        for (int j=0; j<2*(N-i); j++) {
            Console.Write(" ");
        }
        for (int k=0; k<2*i-1; k++) {
            Console.Write("* ");
        }
        Console.WriteLine();
    }
    }
}
