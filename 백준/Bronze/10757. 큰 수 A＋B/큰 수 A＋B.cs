using System;
using System.Numerics;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger[] input = Array.ConvertAll(Console.ReadLine().Split(), BigInteger.Parse);

            BigInteger a = input[0];
            BigInteger b = input[1];

            Console.WriteLine(a + b);

        }
    }
}