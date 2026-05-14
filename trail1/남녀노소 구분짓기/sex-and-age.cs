using System;

public class Codetree
{  
    public static void Main()
    {
        int S = int.Parse(Console.ReadLine());
        int Y = int.Parse(Console.ReadLine());
        if (S == 0 && Y >= 19) {Console.WriteLine("MAN");}
        else if (S == 1 && Y >= 19) {Console.WriteLine("WOMAN");}
        else if (S == 1 && Y < 19) {Console.WriteLine("GIRL");}
        else {Console.WriteLine("BOY");}
    }
}
