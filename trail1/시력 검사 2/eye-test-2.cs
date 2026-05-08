using System;

public class Codetree
{  
    public static void Main()
    {
        double a = double.Parse(Console.ReadLine());
        if (a >= 1.0) {Console.WriteLine("High");}
        else if (a >= 0.5) {Console.WriteLine("Middle");}
        else {Console.WriteLine("Low");}
    }
}
