using System;

public class Codetree
{  
    public static void Main()
    {
        int cnt = 0;
        for (int i=0; i<3; i++) {
            string[] arr = Console.ReadLine().Split();
            int T = int.Parse(arr[1]);
            if (arr[0] == "Y") {
                if (T >= 37) {cnt++;}
            }
        }
        if (cnt >= 2) {Console.WriteLine("E");}
        else {Console.WriteLine("N");}
    }
}
