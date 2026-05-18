using System;

public class Codetree
{
    private static char choice(int i) {
        if (i >= 90) {return 'A';}
        else if (i >= 80) {return 'B';}
        else if (i >= 70) {return 'C';}
        else if (i >= 60) {return 'D';}
        else {return 'F';}
    }

    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=N; i<=100; i++) {
            Console.Write(choice(i) + " ");
        }
    }
}
