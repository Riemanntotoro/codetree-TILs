using System;

public class Codetree
{  
    public static void Main()
    {
        int cnt = 0;
        for (int i=0; i<5; i++) {
            int a = int.Parse(Console.ReadLine());
            if (a % 2 == 0) {cnt++;}
        }
        Console.WriteLine(cnt);
    }
}
