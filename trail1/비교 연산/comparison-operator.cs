using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var (A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        bool[] lst = {(A >= B), (A > B), (B >= A), (B > A), (A == B), (A != B)};
        for (int i=0; i<6; i++) {
            if (lst[i]) {Console.WriteLine(1);}
            else {Console.WriteLine(0);}
        }
    }
}
