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
            int t = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < t; i++)
            {
                string[] arr = Console.ReadLine().Split(' ');
                double h = Convert.ToInt32(arr[0]);
                double w = Convert.ToInt32(arr[1]);
                double n = Convert.ToInt32(arr[2]);

                double x = Convert.ToInt32(Math.Ceiling(n / h));
                double y = Convert.ToInt32(n % h);

                y = y == 0 ? h : y;

                if (x < 10)
                {
                    Console.WriteLine(y.ToString() + "0" + x.ToString());
                }else
                {
                    Console.WriteLine(y.ToString() + x.ToString());
                }
            }
        }
    }
}