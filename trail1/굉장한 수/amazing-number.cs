using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        string res = (N%2==1 && N%3==0) || (N%2==0 && N%5==0) ? "true" : "false";
        Console.WriteLine(res);
    }
}
