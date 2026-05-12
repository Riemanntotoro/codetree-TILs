using System;

public class Codetree
{  
    public static void Main()
    {
        int M = int.Parse(Console.ReadLine());
        string res = "Winter";
        if (M >= 3 && M <= 5) {res = "Spring";}
        else if (M >= 6 && M <= 8) {res = "Summer";}
        else if (M >= 9 && M <= 11) {res = "Fall";}
        Console.WriteLine(res);
    }
}
