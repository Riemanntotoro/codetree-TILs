using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int ssum = 0;
        for (int i=0; i<N; i++) {
            int a = int.Parse(Console.ReadLine());
            ssum += a;
        }
        Console.WriteLine(ssum + " " + $"{(double)ssum / N:F1}");
    }
}
