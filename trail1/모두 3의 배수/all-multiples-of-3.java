import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean flag = true;
        for (int i=0; i<5; i++) {
            int N = sc.nextInt();
            if (N % 3 != 0) {flag = false;}
        }
        int res = flag==true ? 1 : 0;
        System.out.println(res);
    }
}