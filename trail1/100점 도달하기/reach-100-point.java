import java.util.Scanner;
public class Main {
    private static char grade(int i) {
        if (i >= 90) {return 'A';}
        else if (i >= 80) {return 'B';}
        else if (i >= 70) {return 'C';}
        else if (i >= 60) {return 'D';}
        else {return 'F';}
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i=N; i<=100; i++) {
            System.out.print(grade(i) + " ");
        }    
    }
}