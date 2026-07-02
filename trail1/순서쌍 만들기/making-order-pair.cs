using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=N; i>0; i--) {
            for (int j=N; j>0; j--) {
                Console.Write($"({i},{j}) ");
            }
            Console.WriteLine();
        }
    }
}
