using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(B, A) = (int.Parse(arr[0]), int.Parse(arr[1]));
        int i = B;
        while (i >= A) {
            Console.Write(i + " ");
            i -= 2;
        }
    }
}
