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

            while (true)
            {
                int[] num = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

                int a = num[0];
                int b = num[1];

                if (a == 0 && b == 0) break;

                string result = Calculate(a, b);

                sw.WriteLine(result);
            }
                sw.Flush();
        }

        static string Calculate(int a, int b)
        {
            if (b % a == 0)
                return "factor";
            
            for (int i = b; i <= a; i += b)
            {
                if (i == a) return "multiple";
            }

            return "neither";
        }
    }
}