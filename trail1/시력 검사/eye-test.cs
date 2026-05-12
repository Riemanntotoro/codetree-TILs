using System;

public class Codetree
{  
    public static void Main()
    {
        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());
        string val = "Low";
        if (a >= 1.0 && b >= 1.0) {val = "High";}
        else if (a >= 0.5 && b >= 0.5) {val = "Middle";}
        Console.WriteLine(val);
    }
}
