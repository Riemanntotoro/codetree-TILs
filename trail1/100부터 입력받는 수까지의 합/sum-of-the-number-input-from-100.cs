using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int ssum = 0;
        for (int i=N; i<=100; i++) {ssum += i;}
        Console.WriteLine(ssum);
    }
}
