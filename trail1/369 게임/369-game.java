import java.util.Scanner;
public class Main {
    private static int game(int i){
        int a = i / 100;
        i = i % 100;

        int b = i / 10;
        int c = i % 10;

        if (b == 3 || c == 3 || b == 6 || c == 6 || b == 9 || c == 9 || i % 3 == 0) {return 0;}        
        else {return i;}
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i=1; i<=N; i++) {System.out.print(game(i) + " ");}
    }
}