using System;

public class Codetree
{  
    public static void Main()
    {   
        int N = int.Parse(Console.ReadLine());
        int ssum = 0;
        for (int i=1; i<N; i++) {
            if (N % i == 0) {ssum += i;}
        }
        char val = (ssum == N) ? 'P' : 'N';
        Console.WriteLine(val); 
    }
}
