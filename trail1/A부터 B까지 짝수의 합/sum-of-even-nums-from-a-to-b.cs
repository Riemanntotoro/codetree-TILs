using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int ssum = 0;
        for (int i=a; i<=b; i++) {
            if (i % 2 == 0) {ssum += i;}
        }
        Console.WriteLine(ssum);
    }
}
