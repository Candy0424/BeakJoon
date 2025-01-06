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

            int input = int.Parse(sr.ReadLine());
            int[] num = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);
            int result = Calculate(num);

            sw.WriteLine(result);

            sw.Flush();
        }

        static int Calculate(int[] a)
        {
            int min = int.MaxValue;
            int max = int.MinValue;

            for (int i = 0; i < a.Length; i++)
            {
                if (min > a[i])
                    min = a[i];

                if (max < a[i])
                    max = a[i];
            }

            return min * max;
        }
    }
}