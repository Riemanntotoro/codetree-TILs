using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int ssum = 0;
        int mark = 1;
        for (int i=1; i<=100; i++) {
            ssum += i;
            if (ssum >= N) {
                mark = i;
                break;   
            }
        }
        Console.WriteLine(mark);
    }
}
