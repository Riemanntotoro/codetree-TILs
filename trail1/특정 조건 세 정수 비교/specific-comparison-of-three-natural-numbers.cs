using System;

public class Codetree
{  
    public static void Main()
    {
        string[] strlst = Console.ReadLine().Split();
        int a = int.Parse(strlst[0]);
        int b = int.Parse(strlst[1]);
        int c = int.Parse(strlst[2]);
        int val1 = 0;
        int val2 = 0;
        if (a <= b && a <= c) {val1 = 1;}
        if (a == b && a == c) {val2 = 1;}
        Console.WriteLine(val1 + " " + val2);
    }
}
