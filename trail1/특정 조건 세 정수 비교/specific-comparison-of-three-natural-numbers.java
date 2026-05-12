import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int val1 = 0;
        int val2 = 0;
        if (a <= b && a <= c) {val1 = 1;}
        if (a == b && a == c) {val2 = 1;}
        System.out.println(val1 + " " + val2);
    }
}