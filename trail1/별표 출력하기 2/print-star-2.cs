using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<N; i++) {
            for (int j=0; j<N-i; j++) {
                Console.Write("* ");
            }
            Console.WriteLine();
        }
    }
}
