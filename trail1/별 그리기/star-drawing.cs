using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=1; i<=2*N-1; i++) {
            if (i <= N) {
                for (int j=0; j<N-i; j++) {
                    Console.Write(" ");
                }
                for (int k=0; k<2*i-1; k++) {
                    Console.Write("*");
                }
            }
            else {
                for (int j=0; j<i-N; j++) {
                    Console.Write(" ");
                }
                for (int k=0; k<2*(2*N-i)-1; k++) {
                    Console.Write("*");
                }
            }
            Console.WriteLine();
        }
    }
}
