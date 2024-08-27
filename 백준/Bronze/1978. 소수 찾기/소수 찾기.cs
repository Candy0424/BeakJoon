using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            int t = int.Parse(Console.ReadLine());

            int[] n = new int[t];

            n = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            foreach (int item in n)
            {
                if (PrimeCheck(item))
                {
                    num++;
                }
            }

            Console.WriteLine(num);
        }

        public static bool PrimeCheck(int n)
        {
            if (n == 1)
            {
                return false;
            }
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}