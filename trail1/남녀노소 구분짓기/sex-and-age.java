import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int S = sc.nextInt();
        int Y = sc.nextInt();
        if (S == 0 && Y >= 19) {System.out.println("MAN");}
        else if (S == 1 && Y >= 19) {System.out.println("WOMAN");}
        else if (S == 1 && Y < 19) {System.out.println("GIRL");}
        else {System.out.println("BOY");}
    }
}