using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        bool flag = true;
        for (int i=2; i<N; i++) {
            if (N % i == 0) {flag = false; break;}
        }
        char res = flag==true ? 'P' : 'C';
        Console.WriteLine(res);
    }
}
