import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int B = sc.nextInt();
        int A = sc.nextInt();
        int i = B;
        while (i >= A) {
            System.out.print(i + " ");
            i -= 2;
        }
    }
}