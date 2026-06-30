using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        char[,] board = new char[N, N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (i==0 || (j%2==1 && j>=i)) {board[i,j] = '*';}
                else {board[i,j] = ' ';}
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                Console.Write(board[i,j]+ " ");
            }
            Console.WriteLine();
        }
    }
}
