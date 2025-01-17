using System;
using System.IO;
using System.Numerics;

namespace BeakJoon
{
    internal class Program
    {
        static StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        static StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        static void Main(string[] args)
        {
            long[] s = Array.ConvertAll(sr.ReadLine().Split(' '), long.Parse);

            long k = s[0];
            long n = s[1];

            long max = Math.Max(k, n);
            long min = Math.Min(k, n);
            if (k == n)
            {
                sw.WriteLine(k);
            }
            else
            {
                BigInteger result = (max * (max+1) / 2) - (min-1) * min / 2;
                sw.WriteLine(result);
            }

            sw.Flush();
        }
    }
}