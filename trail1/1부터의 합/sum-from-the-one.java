import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int ssum = 0, mark = 0;
        for (int i=1; i<=N; i++) {
            ssum += i;
            if (ssum >= N) {
                mark = i;
                break;
            }
        }
        System.out.println(mark);
    }
}