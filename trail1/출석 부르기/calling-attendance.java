import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] arr = {"John", "Tom", "Paul"};
        int N = sc.nextInt();
        if (N <= 3) {System.out.println(arr[N-1]);}
        else {System.out.println("Vacancy");}
    }
}