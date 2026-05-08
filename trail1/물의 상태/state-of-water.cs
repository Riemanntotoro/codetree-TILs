using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        if (N < 0) {Console.WriteLine("ice");}
        else if (N >= 100) {Console.WriteLine("vapor");}
        else {Console.WriteLine("water");}
    }
}
