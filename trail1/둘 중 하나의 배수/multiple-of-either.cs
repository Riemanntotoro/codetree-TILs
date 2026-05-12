using System;

public class Codetree
{  
    public static void Main()
    {
        int A = int.Parse(Console.ReadLine());
        int res = A % 3 == 0 || A % 5 == 0 ? 1 : 0;
        Console.WriteLine(res);
    }
}
