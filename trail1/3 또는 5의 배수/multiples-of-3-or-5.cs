using System;

public class Codetree
{  
    public static void Main()
    {
        int A = int.Parse(Console.ReadLine());
        string result1 = A % 3 == 0 ? "YES" : "NO";
        string result2 = A % 5 == 0 ? "YES" : "NO";
        Console.WriteLine(result1 + "\n" + result2);
    }
}
