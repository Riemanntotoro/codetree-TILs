using System;

public class Codetree
{  
    public static void Main()
    {
        while(true) {
            string[] arr = Console.ReadLine().Split();
            var(a, b, c) = (int.Parse(arr[0]), int.Parse(arr[1]), arr[2]);
            Console.WriteLine(a * b);
            if (c == "C") break;
        }
    }
}
