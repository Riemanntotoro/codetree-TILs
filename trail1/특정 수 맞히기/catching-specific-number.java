import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int N = sc.nextInt();
            if (N < 25) {System.out.println("Higher");}
            else if (N > 25) {System.out.println("Lower");}
            else {
                System.out.println("Good");
                break;
            }
        }
    }
}