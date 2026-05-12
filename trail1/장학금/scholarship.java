import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int score = 0;
        if (a >= 90 && b >= 95) {score = 100000;}
        else if (a >= 90 && b >= 90) {score = 50000;}
        System.out.println(score); 
    }
}