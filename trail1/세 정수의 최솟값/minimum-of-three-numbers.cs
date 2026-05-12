using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var (a, b, c) = (int.Parse(arr[0]), int.Parse(arr[1]), int.Parse(arr[2]));
        int res = a;
        if (b < res) {res = b;}
        if (c < res) {res = c;}
        Console.WriteLine(res);
    }
}
