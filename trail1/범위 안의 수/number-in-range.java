import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String val = (a >= 10 && a <= 20) ? "yes" : "no";
        System.out.println(val);
    }
}