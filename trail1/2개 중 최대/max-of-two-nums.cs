using System;

public class Codetree
{  
    public static void Main()
    {
        string[] parts = Console.ReadLine().Split();
        var (a, b) = (int.Parse(parts[0]), int.Parse(parts[1]));
        int val = a>b ? a : b;
        Console.WriteLine(val);
    }
}
