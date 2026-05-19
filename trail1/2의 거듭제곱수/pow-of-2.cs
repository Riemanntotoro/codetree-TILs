using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int cnt = 0;
        while (N > 2) {
            N /= 2;
            cnt++;
        }
        Console.WriteLine(cnt+1);
    }
}
