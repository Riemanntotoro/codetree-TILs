using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        if (A > 0) {
            for (int i=0; i<B; i++) {Console.Write(A);}
        }
        else {Console.WriteLine(0);}
    }
}
