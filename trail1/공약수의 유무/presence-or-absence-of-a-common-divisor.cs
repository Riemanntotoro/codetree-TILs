using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(A, B) = (int.Parse(arr[0]), int.Parse(arr[1]));
        bool flag = false;
        for (int i=A; i<=B; i++) {
            if (1920 % i == 0 && 2880 % i == 0) {
                flag = true;
                break;
            }
        }
        int val = flag==true ? 1 : 0;
        Console.WriteLine(val);
    }
}
