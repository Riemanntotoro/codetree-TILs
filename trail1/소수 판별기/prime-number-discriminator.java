import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        boolean flag = true;
        for (int i=2; i<N; i++) {
            if (N % i == 0) {flag = false; break;}
        }
        char res = flag==true ? 'P' : 'C';
        System.out.println(res);
    }
}