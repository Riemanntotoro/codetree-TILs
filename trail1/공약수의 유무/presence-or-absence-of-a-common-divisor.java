import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        boolean flag = false;
        for (int i=A; i<=B; i++) {
            if(1920 % i == 0 && 2880 % i == 0) {flag = true; break;}
        }
        int val = flag==true ? 1 : 0;
        System.out.println(val);
    }
}