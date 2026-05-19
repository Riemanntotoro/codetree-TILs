import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = 0;
        int ssum = 0;
        while(true) {
            int n = sc.nextInt();
            if (n >= 30 || n < 20) {System.out.printf("%.2f", (double)ssum / cnt); break;}
            ssum += n;
            cnt += 1;
        }

    }
}