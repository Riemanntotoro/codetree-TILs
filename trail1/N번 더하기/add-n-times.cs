using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, N) = (int.Parse(arr[0]), int.Parse(arr[1]));
        for (int i=0; i<N; i++) {
            A += N;
            Console.WriteLine(A);
        }
    }
}
