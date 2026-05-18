using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        if (A >= B) {
            for (int i=A; i>=B; i--) {
                Console.Write(i + " ");
            }
        }
        else {
            for (int i=B; i>=A; i--) {
                Console.Write(i + " ");
            }
        }
    }
}
