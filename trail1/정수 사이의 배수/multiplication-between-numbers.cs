using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        int ssum = 0, cnt = 0;
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        for (int i=A; i<=B; i++) {
            if (i % 5 == 0 || i % 7 == 0) {
                ssum += i;
                cnt += 1;
            }
        }
        Console.WriteLine($"{ssum} {(double)ssum/cnt:F1}");
    }
}
