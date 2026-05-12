using System;

public class Codetree
{  
    public static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string res = a % 13 == 0 || a % 19 == 0 ? "True" : "False";
        Console.WriteLine(res);
    }
}
