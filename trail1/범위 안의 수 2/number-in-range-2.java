import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ssum = 0, cnt = 0;
        for (int i=0; i<10; i++) {
            int a = sc.nextInt();
            if (a>=0 && a<=200) {cnt++; ssum+=a;}
        }
        System.out.printf("%d %.1f", ssum, (double)ssum / cnt);
    }
}