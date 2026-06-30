using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int[,] board = new int[N, N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                board[i, j] = j+1; 
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                Console.Write(board[i, j]);
            }
            Console.WriteLine();
        }
    }
}
