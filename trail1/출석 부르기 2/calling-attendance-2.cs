using System;

public class Codetree
{  
    public static void Main()
    {
        while(true) {
            int N = int.Parse(Console.ReadLine());
            if (N == 1) {Console.WriteLine("John");}
            else if (N == 2) {Console.WriteLine("Tom");}
            else if (N == 3) {Console.WriteLine("Paul");}
            else if (N == 4) {Console.WriteLine("Sam");}
            else {Console.WriteLine("Vacancy"); break;}
        }
    }
}
