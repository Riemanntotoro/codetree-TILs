using System;

public class Codetree
{  
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        if (n == 2) {Console.WriteLine(28);}
        else if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {Console.WriteLine(31);}
        else {Console.WriteLine(30);}
    }
}
