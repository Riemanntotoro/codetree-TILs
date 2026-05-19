using System;

public class Codetree
{  
    public static void Main()
    {
        int cnt = 0;
        while (true) {
            int N = int.Parse(Console.ReadLine());
            if (N % 2 == 1) continue;
            Console.WriteLine(N / 2);
            cnt++;
            if (cnt == 3) break;
        }
    }
}
