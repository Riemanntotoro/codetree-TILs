import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
public class Main {
    public static void main(String[] args) {
        Map<String, String> score = new HashMap<>();
            score.put("S", "Superior");
            score.put("A", "Excellent");
            score.put("B", "Good");
            score.put("C", "Usually");
            score.put("D", "Effort");
        
        try (Scanner sc = new Scanner(System.in)) {
            if (sc.hasNext()) {
                String grade = sc.next();
                String result = score.getOrDefault(grade, "Failure");
                System.out.println(result);
            }
        }
    }
}