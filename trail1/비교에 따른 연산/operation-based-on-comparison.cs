using System;

public class Codetree
{  
    public static void Main()
    {
        string[] parts = Console.ReadLine().Split();
        var (a, b) = (int.Parse(parts[0]), int.Parse(parts[1]));
        if (a > b) {Console.WriteLine(a * b);}
        else {Console.WriteLine(b / a);}
    }
}
