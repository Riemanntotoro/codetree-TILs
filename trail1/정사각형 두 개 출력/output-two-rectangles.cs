using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int k=0; k<2; k++) {
            for (int i=0; i<N; i++) {
                for (int j=0; j<N; j++) {
                    Console.Write("*");
                }
            Console.WriteLine();
            }
        Console.WriteLine();
        }
    }
}
