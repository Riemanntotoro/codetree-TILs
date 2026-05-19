import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int ssum = 0;
        for (int i=0; i<N; i++) {
            int a = sc.nextInt();
            ssum += a;
        }
        System.out.printf("%d %.1f", ssum, (double)ssum/N);
    }
}