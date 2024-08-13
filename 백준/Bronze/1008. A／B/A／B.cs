using System;

namespace beakjoon
{
    class program
    {
        static void Main()
        {
            string A = Console.ReadLine();
            string[] B = A.Split(' ');
            
            double a = double.Parse(B[0]);
            double b = double.Parse(B[1]);
            
            Console.WriteLine(a / b);
        }
    }
}