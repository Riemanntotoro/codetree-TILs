using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                int val = (N*i+j+1)%9!=0 ? (N*i+j+1)%9 : 9;
                Console.Write(val);
            }
            Console.WriteLine();
        }
    }
}
