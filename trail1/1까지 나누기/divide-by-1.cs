using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int i = 1, cnt = 0;
        while(N>1) {
            N /= i;
            cnt++;
            i++;
        }
        Console.WriteLine(cnt);
    }
}
