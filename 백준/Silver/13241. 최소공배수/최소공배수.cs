using System;
using System.IO;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            long[] num = Array.ConvertAll(sr.ReadLine().Split(' '), long.Parse);

            long x = num[0];
            long y = num[1];

            long y2 = GCD(x, y);

            long num2 = (x * y) / y2;

            sw.WriteLine(num2);
            sw.Flush();
        }

        static long GCD(long a, long b)
        {
            long r;
            long a2 = Math.Max(a, b);
            long b2 = Math.Min(a, b);

            while (true)
            {
                r = a2 % b2;
                if (r == 0) break;

                long temp = b2;
                b2 = r;
                a2 = temp;
            }
            return b2;
        }
    }
}