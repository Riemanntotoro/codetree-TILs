import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        String val1 = (A % 3 == 0) ? "YES" : "NO";
        String val2 = (A % 5 == 0) ? "YES" : "NO";
        System.out.println(val1 + "\n" + val2);
    }
}