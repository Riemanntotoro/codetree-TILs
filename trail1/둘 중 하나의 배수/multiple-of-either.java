import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int res = A % 3 == 0 || A % 5 == 0 ? 1 : 0;
        System.out.println(res);
    }
}