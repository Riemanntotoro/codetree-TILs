using System;

public class Codetree
{  
    public static void Main()
    {
        int Y = int.Parse(Console.ReadLine());
        string res = ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) ? "true" : "false";
        Console.WriteLine(res); 
    }
}
