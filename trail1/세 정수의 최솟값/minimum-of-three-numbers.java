import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int val = a;
        if (b < val) {val = b;}
        if (c < val) {val = c;}
        System.out.println(val);
    }
}