import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int ssum = 0;
        if (A > B) {
            int temp = B;
            B = A;
            A = temp;
        }
        for (int i=A; i<=B; i++) {
            if (i % 5 == 0) {ssum += i;}
        }
        System.out.println(ssum);
    }
}