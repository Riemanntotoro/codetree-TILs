using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var numbers = Enumerable.Range(n, 101-n);
        Console.WriteLine(string.Join(" ", numbers));
    }
}
