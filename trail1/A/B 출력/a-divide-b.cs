using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        Console.Write(A/B + ".");

        int remainder = A % B;
        for (int i=0; i<20; i++) {
            remainder *= 10;
            Console.Write(remainder / B);
            remainder %= B;
        }
    }
}
