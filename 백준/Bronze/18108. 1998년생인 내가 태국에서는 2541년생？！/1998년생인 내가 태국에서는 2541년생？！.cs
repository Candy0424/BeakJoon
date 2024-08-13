using System;

namespace beakjoon
{
    class 백준
    {
        static void Main()
        {
            string y = Console.ReadLine();
            
            string[] a = y.Split(' ');
            
            int b = int.Parse(a[0]);
            
            Console.WriteLine(b - 543);
        }
    }
}