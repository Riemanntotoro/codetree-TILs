import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = 0;
        for (int i=0; i<3; i++) {
            char flu = sc.next().charAt(0);
            int T = sc.nextInt();
            if (flu == 'Y' && T >= 37) {cnt += 1;}
        }
        System.out.println(cnt >= 2 ? "E" : "N");
    }
}