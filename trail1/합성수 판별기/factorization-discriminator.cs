using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        bool flag = false;
        for (int i=2; i<N; i++) {
            if (N % i == 0) {flag = true; break;}
        }
        string val = flag==true ? "C" : "N";
        Console.WriteLine(val);
    }
}
