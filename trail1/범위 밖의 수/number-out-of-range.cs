using System;

public class Codetree
{  
    public static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string res = a < 10 || a > 20 ? "yes" : "no";
        Console.WriteLine(res);
    }
}
