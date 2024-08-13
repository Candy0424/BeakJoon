using System;
using System.Numerics;
using System.Security.Cryptography;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http.Headers;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger[] t = Array.ConvertAll(Console.ReadLine().Split(' '), BigInteger.Parse);

            BigInteger n = t[0];
            BigInteger m = t[1];
            Console.WriteLine(n / m);
            Console.WriteLine(n % m);
        }
    }
}