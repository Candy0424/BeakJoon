using System;
using System.Collections.Generic;
using System.Data.SqlTypes;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Policy;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = 0;
            double h = .0f;
            double w = .0f;
            double n = .0f;

            double x = .0f;
            double y = .0f;

            t = int.Parse(Console.ReadLine());


            for (int i = 0; i < t; i++)
            {
                string[] arr = Console.ReadLine().Split(' ');
                h = int.Parse(arr[0]);
                w = int.Parse(arr[1]);
                n = int.Parse(arr[2]);

                x = Math.Ceiling(n / h);
                y = n % h;

                if (y == 0)
                {
                    y = h;
                }

                if (x < 10)
                {
                    Console.WriteLine(y.ToString() + "0" + x.ToString());
                }
                else
                {
                    Console.WriteLine(y.ToString() + x.ToString());
                }
            }
        }
    }
}