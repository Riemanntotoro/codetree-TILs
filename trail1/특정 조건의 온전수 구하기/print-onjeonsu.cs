using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<=N; i++) {
            if (i % 2 == 0) continue;
            if (i % 10 == 5) continue;
            if (i % 3 == 0 && i % 9 != 0) continue;
            Console.Write(i + " ");
        }
    }
}
