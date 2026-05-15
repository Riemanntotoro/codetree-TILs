using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(B, A) = (int.Parse(arr[0]), int.Parse(arr[1]));
        for(int i=B; i>=A; i-=2) {Console.Write(i + " ");}
    }
}
