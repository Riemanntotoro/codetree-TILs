using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        if (A > B) {
            int temp = B;
            B = A;
            A = temp;
        }
        int ssum = 0;
        for (int i=A; i<=B; i++) {
            if (i % 5 == 0) {ssum += i;}
        }
        Console.WriteLine(ssum);
    }
}
