using System;

public class Codetree
{  
    public static void Main()
    {
        while(true) {
            int N = int.Parse(Console.ReadLine());
            if (N > 25) {Console.WriteLine("Lower");}
            else if (N < 25) {Console.WriteLine("Higher");}
            else {Console.WriteLine("Good"); break;}
        }
    }
}
