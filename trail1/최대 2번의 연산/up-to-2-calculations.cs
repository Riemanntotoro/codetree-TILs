using System;

public class Codetree
{  
    public static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        if (a % 2 == 0) {a /= 2;}
        if (a % 2 == 1) {a = (a+1)/2;}
        Console.WriteLine(a);
    }
}
