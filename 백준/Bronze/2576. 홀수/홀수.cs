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

            int result = 0;

            int min = int.MaxValue;

            for (int i = 0; i < 7; i++)
            {
                int num = int.Parse(sr.ReadLine());

                if (Calculate(num))
                {
                    result += num;
                    if (min > num) min = num;
                }
            }

            if (result == 0)
            {
                sw.WriteLine(-1);
            }
            else
            {
                sw.WriteLine(result);
                sw.WriteLine(min);
            }

            sw.Flush();
        }

        static bool Calculate(int a)
        {
            if (a % 2 == 1) return true;

            return false;
        }
    }
}