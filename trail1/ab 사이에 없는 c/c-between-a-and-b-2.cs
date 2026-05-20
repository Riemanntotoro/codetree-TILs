using System;

public class Codetree
{  
    public static void Main()
    {
        string[] arr = Console.ReadLine().Split();
        var(a, b, c) = (int.Parse(arr[0]),int.Parse(arr[1]),int.Parse(arr[2]));
        bool flag = true;
        for (int i=a; i<=b; i++) {
            if (i % c == 0) {flag = false; break;}
        }
        string val = flag==true ? "YES" : "NO";
        Console.WriteLine(val);
    }
}
