import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][] board = new int[N][N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                board[i][j] = 11 + 2*i + 2*j;
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