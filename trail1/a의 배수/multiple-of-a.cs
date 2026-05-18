using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(N, A) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int i=1;
        while (i <= N) {
            if (i % A == 0) {Console.WriteLine(1);}
            else {Console.WriteLine(0);}
            i++;
        }
    }
}
