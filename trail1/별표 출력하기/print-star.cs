using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=1; i<=N; i++) {
            for (int j=0; j<i; j++) {
                Console.Write("* ");
            }
            Console.WriteLine();
        }
        for (int i=N-1; i>=1; i--) {
            for (int j=0; j<i; j++) {
                Console.Write("* ");
            }
            Console.WriteLine();
        }
    }
}
