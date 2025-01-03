using System;
using System.IO;
using System.Text;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            long[] input = Array.ConvertAll(sr.ReadLine().Split(' '), long.Parse);

            long x = input[0];
            long y = input[1];

            long r = GCD(x, y);
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < r; i++)
            {
                sb.Append("1");
            }
            sw.WriteLine(sb);

            sw.Flush();
        }

        static long GCD(long x, long y)
        {
            long r;
            long x2 = x;
            long y2 = y;
            while (true)
            {
                r = x2 % y2;
                if (r == 0) break;

                long temp = y2;
                y2 = r;
                x2 = temp;
            }
            return y2;
        }
    }
}