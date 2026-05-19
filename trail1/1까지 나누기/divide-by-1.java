import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt = 0;
        while (N > 1) {
            N /= cnt+1;
            cnt++;
        }
        System.out.println(cnt);
    }
}