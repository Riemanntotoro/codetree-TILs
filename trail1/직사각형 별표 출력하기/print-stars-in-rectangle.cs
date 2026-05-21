using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(N, M) = (int.Parse(arr[0]), int.Parse(arr[1]));
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                Console.Write("* ");
            }
        Console.WriteLine();
        }
    }
}
