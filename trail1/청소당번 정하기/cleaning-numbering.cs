using System;

public class Codetree
{  
    public static void Main()
    {
        int a = 0, b = 0, c = 0;
        int n = int.Parse(Console.ReadLine());
        for (int i=1; i<=n; i++) {
            if (i % 12 == 0) {c++;}
            else if (i % 3 == 0) {b++;}
            else if (i % 2 == 0) {a++;}
        }
        Console.WriteLine(a + " " + b + " " + c);
    }
}
