using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<N; i++) {
            int a = int.Parse(Console.ReadLine());
            if (a % 3 == 0 && a % 2 == 1) {Console.WriteLine(a);}
        }
    }
}
