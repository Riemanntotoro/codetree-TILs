using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int cnt = 0;
        while (N>1){
            if (N % 2 == 0) {N /= 2;}
            else {N = 3 * N +1;}
            cnt++;
        }
        Console.WriteLine(cnt);
    }
}
