import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i=1; i<=2*N-1; i++) {
            if (i<=N) {
                for (int j=0; j<N-i; j++) {
                    System.out.print(" ");
                }
                for (int k=0; k<2*i-1; k++) {
                    System.out.print("*");
                }
            }
            else {
                for (int j=0; j<i-N; j++) {
                    System.out.print(" ");
                }
                for (int k=0; k<2*(2*N-i)-1; k++) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}