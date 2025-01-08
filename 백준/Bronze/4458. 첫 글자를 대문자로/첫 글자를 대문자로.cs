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

            int line = int.Parse(sr.ReadLine());

            for (int i = 0; i < line; i++)
            {
                string str = sr.ReadLine();

                string result = Calculate(str);
                sw.WriteLine(result);
            }
            sw.Flush();
        }

        static string Calculate(string s)
        {
            string str = "";

            string big = s.ToUpper();

            str += big[0];

            for (int i = 1; i < s.Length; i++)
            {
                str += s[i];
            }

            return str;
        }
    }
}