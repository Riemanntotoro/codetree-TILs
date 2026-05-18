import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int ssum = 0, cnt = 0;
        for (int i=A; i<=B; i++) {
            if (i % 7 == 0 || i % 5 == 0) {
                ssum += i;
                cnt += 1;
            }
        }
        System.out.printf("%d %.1f", ssum, (double)ssum/cnt);
    }
}