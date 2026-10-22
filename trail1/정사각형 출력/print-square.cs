using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++){
                Console.Write($"{N*i + j + 1} ");
            }
            Console.WriteLine();
        }
    }
}
