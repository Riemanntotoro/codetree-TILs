using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        char[,] board = new char[N, N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (i==0 || i==N-1 || j==0 || j==N-1) {board[i, j] = '*';}
                else if (i > j) {board[i, j] = '*';}
                else {board[i, j] = ' ';}
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                Console.Write(board[i,j] + " ");
            }
            Console.WriteLine();
        }
    }
}
