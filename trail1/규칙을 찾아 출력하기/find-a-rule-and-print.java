import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        char[][] board = new char[N][N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (i==0 || j==0 || j==N-1 || i==N-1) {board[i][j] = '*';}
                else if (i > j) {board[i][j] = '*';}
                else {board[i][j] = ' ';}
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }
}