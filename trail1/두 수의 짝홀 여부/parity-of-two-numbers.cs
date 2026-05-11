using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b) = (int.Parse(arr[0]), int.Parse(arr[1]));
        string val1 = a%2==0 ? "even" : "odd";
        string val2 = b%2==0 ? "even" : "odd";
        Console.WriteLine(val1);
        Console.WriteLine(val2);
    }
}
