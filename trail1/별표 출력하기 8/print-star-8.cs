using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=1; i<=N; i++) {
            if (i % 2 == 0) {for (int j=0; j<i; j++) {Console.Write("* ");}}
            else {Console.Write("*");}
            Console.WriteLine();
        }
    }
}
