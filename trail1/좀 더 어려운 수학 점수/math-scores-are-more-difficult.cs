using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arrA = Console.ReadLine().Split();
        string[] arrB = Console.ReadLine().Split();
        var(Am, Ae) = (int.Parse(arrA[0]), int.Parse(arrA[1]));
        var(Bm, Be) = (int.Parse(arrB[0]), int.Parse(arrB[1]));
        if (Am == Bm && Ae > Be) {Console.WriteLine("A");}
        else if (Am == Bm && Ae < Be) {Console.WriteLine("B");}
        else if (Am > Bm) {Console.WriteLine("A");}
        else {Console.WriteLine("B");}
    }
}
