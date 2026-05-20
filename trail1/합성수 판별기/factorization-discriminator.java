import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        boolean flag = false;
        for (int i=2; i<N; i++) {
            if (N % i == 0) {flag = true; break;}
        }
        char val = flag==true ? 'C' : 'N';
        System.out.println(val);
    }
}