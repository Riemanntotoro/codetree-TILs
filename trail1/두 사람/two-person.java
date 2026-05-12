import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a1 = sc.nextInt();
        char a2 = sc.next().charAt(0);
        int b1 = sc.nextInt();
        char b2 = sc.next().charAt(0);
        int val = (a1 >= 19 && a2 == 'M') || (b1 >= 19 && b2 == 'M') ? 1 : 0;
        System.out.println(val);
    }
}