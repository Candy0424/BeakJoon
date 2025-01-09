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

            int[] input = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

            int a = input[0];
            int b = input[1];

            int result = Calculate(a, b);

            sw.WriteLine(result);

            sw.Flush();
        }

        static int Calculate(int a, int b)
        {
            string str1 = a.ToString();
            string str2 = b.ToString();

            string rA = "";
            string rB = "";
            string rR = "";

            for (int i = str1.Length - 1; i >= 0; i--)
            {
                rA += str1[i];
            }

            for (int i = str2.Length - 1; i >= 0; i--)
            {
                rB += str2[i];
            }

            int result = int.Parse(rA) + int.Parse(rB);

            for (int i = result.ToString().Length - 1; i >= 0; i--)
            {
                rR += result.ToString()[i];
            }

            return int.Parse(rR);
        } 
    }
}           