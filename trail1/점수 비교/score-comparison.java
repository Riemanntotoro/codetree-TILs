import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int AM = sc.nextInt();
        int AE = sc.nextInt();
        int BM = sc.nextInt();
        int BE = sc.nextInt();
        int val = (AM > BM) && (AE > BE) ? 1 : 0;
        System.out.println(val);
    }
}