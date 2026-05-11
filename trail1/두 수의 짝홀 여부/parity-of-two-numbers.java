import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        String val1 = (a%2==0) ? "even" : "odd";
        String val2 = (b%2==0) ? "even" : "odd";
        System.out.println(val1 + "\n" + val2);
    }
}