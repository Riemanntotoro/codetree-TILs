using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=1; i<=2*N; i++) {
            if (i < N) {
                if (i % 2 == 0) {for (int j=0; j<N-i/2+1; j++) {Console.Write("* ");}}
                else {for (int k=0; k<(i+1)/2; k++) {Console.Write("* ");}}
            }   
            else {
                int l = 2* N - i + 1;
                if (l % 2 == 0) {for (int j=0; j<N-l/2+1; j++) {Console.Write("* ");}}
                else {for (int k=0; k<(l+1)/2; k++) {Console.Write("* ");}}
            }
            Console.WriteLine();
        }
    }
}
