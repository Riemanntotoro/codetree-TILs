import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i=1; i<=2*N; i++) {
            if (i <= N) { 
                if (i % 2 == 1) {
                    for (int j=0; j<(N-i/2); j++) {System.out.print("* ");}
                }
                else {for (int j=0; j<i/2; j++) {System.out.print("* ");}}
            }
            else {
                int k = 2*N+1-i;
                if (k % 2 == 1) {
                    for (int j=0; j<(N-k/2); j++) {System.out.print("* ");}
                }
                else {for (int j=0; j<k/2; j++) {System.out.print("* ");}}
            }
            System.out.println();
        }
    }
}