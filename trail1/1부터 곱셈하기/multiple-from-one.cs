using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int prod = 1, mark = 1;
        for (int i=1; i<=10; i++) {
            prod *= i;
            if (prod >= N) {
                mark = i;
                break;
            }
        }
        Console.WriteLine(mark);
    }
}
