using System;
using System.Numerics;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger result = 0;

            for (int i = 0; i < 3; i++)
            {
                int n = int.Parse(Console.ReadLine());

                for (int j = 0; j < n; j++)
                {
                    long s = long.Parse(Console.ReadLine());

                    result += s;
                }

                if (result == 0)
                    Console.WriteLine(0);
                else if (result > 0)
                    Console.WriteLine("+");
                else if (result < 0)
                    Console.WriteLine("-");

                result = 0;
            }
        }
    }
}