import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int ssum = 0;
        for(int i=1; i<N; i++) {
            if (N % i == 0) {ssum += i;}
        }
        char val = (ssum == N) ? 'P' : 'N';
        System.out.println(val); 
    }
}