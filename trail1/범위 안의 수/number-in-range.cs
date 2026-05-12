using System;

public class Codetree
{  
    public static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string val = a >= 10 && a <= 20 ? "yes" : "no";
        Console.WriteLine(val);
    }
}
