using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<N; i++) {
            for (int j=N-i; j>=1; j--) {
                Console.Write("*");
            }
            for (int k=0; k<2*i; k++) {
                Console.Write(" ");
            }
            for (int j=N-i; j>=1; j--) {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
}
