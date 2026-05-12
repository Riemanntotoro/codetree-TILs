import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String res = (N%2==1 && N%3==0) || (N%10==0) ? "true" : "false";
        System.out.println(res);
    }
}