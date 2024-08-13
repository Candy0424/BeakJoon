using System;

namespace beakjoon
{
    class program
    {
        static void Main()
        {
            string A = Console.ReadLine();
            string[] B = A.Split(' ');
            
            int a = int.Parse(B[0]);
            int b = int.Parse(B[1]);
            
            Console.WriteLine(a * b);
        }
    }
}