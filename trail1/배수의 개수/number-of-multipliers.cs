using System;

public class Codetree
{  
    public static void Main()
    {
        int cnt3 = 0;
        int cnt5 = 0;
        for (int i=0; i<10; i++) {
            int a = int.Parse(Console.ReadLine());
            if (a % 3 == 0) {cnt3++;}
            if (a % 5 == 0) {cnt5++;} 
        }
        Console.WriteLine(cnt3 + " " + cnt5);
    }
}
