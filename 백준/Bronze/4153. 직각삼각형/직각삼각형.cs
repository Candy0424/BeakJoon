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
            int a = 0;
            int b = 0;
            int c = 0;
            int[] t = new int[3];
            for (; ;)
            {
                t = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

                if (t[0] == 0 && t[1] == 0 && t[2] == 0)
                {
                    break;
                }

                a = t[0];
                b = t[1];
                c = t[2];

                a *= a;
                b *= b;
                c *= c;

                if (a + b == c || b + a == c) Pita(a, b, c);
                else if (a + c == b || c + a == b) Pita(a, c, b);
                else if (b + c == a || c + b == a) Pita(b, c, a);
                else Pita(a, b, c);
            }

        }

        public static void Pita(int a, int b, int c)
        {
            if (a + b == c)
            {
                Console.WriteLine("right");
            }
            else
            {
                Console.WriteLine("wrong");
            }
        }
    }
}