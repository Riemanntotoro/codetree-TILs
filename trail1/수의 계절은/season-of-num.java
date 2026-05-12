import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        String res = "Spring";
        if (6 <= M && M <= 8) {res = "Summer";}
        else if (9 <= M && M <= 11) {res = "Fall";}
        else if (M == 1 || M == 2 || M == 12) {res = "Winter";}
        System.out.println(res);
    }
}