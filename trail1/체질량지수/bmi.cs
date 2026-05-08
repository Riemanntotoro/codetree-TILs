using System;

public class Codetree
{  
    public static void Main()
    {
        string[] parts = Console.ReadLine().Split();
        int h = int.Parse(parts[0]);
        int w = int.Parse(parts[1]);
        double b = (double)(10000 * w) / (h * h);
        Console.WriteLine((int)b);
        if (b >= 25) {Console.WriteLine("Obesity");}
    }
}
