using System;

public class Codetree
{  
    public static void Main()
    {
        int ssum = 0, cnt = 0;
        for (int i=0; i<10; i++) {
            int a = int.Parse(Console.ReadLine());
            if (a >= 0 && a <= 200) {
                cnt += 1; 
                ssum += a;
            }
        }
        Console.WriteLine($"{ssum} {(double)ssum/cnt:F1}");
    }
}
