using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int i = A;
        while(i <= B) {
            Console.Write(i + " ");
            i += 2;
        }
    }
}
