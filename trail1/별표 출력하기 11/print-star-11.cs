using System;

public class Codetree
{  
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int size = 2*N + 1;
        char[,] board = new char[size, size];
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i % 2 == 1 && j % 2 == 1) {board[i,j] = ' ';}
                else {board[i,j] = '*';}
            }
        }
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                Console.Write(board[i,j] + " ");    
            }
            Console.WriteLine();
        }
    }
}
