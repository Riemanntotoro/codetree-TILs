using System;

public class Codetree
{  
    public static void Main()
    {
        int i = 1;
        int N = int.Parse(Console.ReadLine());
        while (i <= N) {
            if(i % 3 == 0) {Console.Write(i + " ");}
            i++;
        }
    }
}
