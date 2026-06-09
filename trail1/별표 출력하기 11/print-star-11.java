import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        char[][] map = new char[2*N+1][4*N+1];
        for (int i=0; i<2*N+1; i++) {
            for (int j=0; j<4*N+1; j++) {
                if (i%2==0 && j%2==0) {map[i][j] = '*';}
                else if (i%2==1 && j%4==0) {map[i][j] = '*';}
                else {map[i][j] = ' ';}
            }
        }
        for (int i=0; i<2*N+1; i++) {
            for (int j=0; j<4*N+1; j++) {
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
    }
}