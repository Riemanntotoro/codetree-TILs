using System;

public class Codetree
{  
    public static void Main()
    {
        bool flag = true;
        for (int i=0; i<5; i++) {
            int N = int.Parse(Console.ReadLine());
            if (N %3 != 0) flag = false;
        }
        int res = flag==true ? 1 : 0;
        Console.WriteLine(res);
    }
}
