using System;
using System.Collections.Generic;

public class Codetree
{  
    public static void Main()
    {
        var Score = new Dictionary<string, string> {
            ["S"] = "Superior", ["A"] = "Excellent", ["B"] = "Good", ["C"] = "Usually", ["D"] = "Effort"
        };
        string grade = Console.ReadLine();
        if (Score.TryGetValue(grade, out string result)) {
            Console.WriteLine(result);
        } else {Console.WriteLine("Failure");}
    }
}
