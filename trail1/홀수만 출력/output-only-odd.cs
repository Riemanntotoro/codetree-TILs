using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b) = (int.Parse(arr[0]), int.Parse(arr[1]));
        for(int i=a; i<=b; i+=2) {Console.Write(i + " ");}
    }
}
