using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int prod = 1;
        for (int i=A; i<=B; i++) {if (i % A == 0) {prod *= i;}}
        Console.WriteLine(prod);
    }
}
