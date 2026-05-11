using System;

public class Codetree
{  
    public static void Main()
    {
        string[] lst = {"John", "Tom", "Paul"};
        int N = int.Parse(Console.ReadLine());
        if (N<=3) {Console.WriteLine(lst[N-1]);}
        else {Console.WriteLine("Vacancy");}
    }
}
