using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        if (N >= 80) {Console.WriteLine("pass");}
        else {Console.WriteLine($"{80-N} more score");}
    }
}
