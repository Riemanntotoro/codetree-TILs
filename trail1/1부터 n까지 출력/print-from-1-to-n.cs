using System;
using System.Linq;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        var numbers = Enumerable.Range(1, N);
        Console.WriteLine(string.Join(" ", numbers));
    }
}
