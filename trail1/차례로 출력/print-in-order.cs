using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        var numbers = Enumerable.Range(5, 13);
        Console.WriteLine(string.Join(" ", numbers));
    }
}
