using System;

public class Codetree
{  
    public static void Main()
    {
        int ssum = 0;
        int cnt = 0;
        while (true) {
            int n = int.Parse(Console.ReadLine());
            if (n >= 30 || n < 20) {Console.WriteLine($"{(double)ssum / cnt:F2}"); break;}
            ssum += n;
            cnt += 1;
        }
        
    }
}
