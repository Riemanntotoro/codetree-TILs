import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        System.out.print(A/B + ".");
        int rem = A % B;
        for (int i=0; i<20; i++) {
            rem *= 10;
            System.out.print(rem/B);
            rem %= B;
        }
    }
}