using System;
using System.Linq;
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
                string input = sr.ReadLine();

                if (input.Last() == '#')
                    break;

                sw.WriteLine(Calculate(input));
            }

            sw.Flush();
        }

        static int Calculate(string s)
        {
            string small = s.ToLower();
            int temp = 0;
            foreach (char c in small)
            {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    temp++;
            }

            return temp;
        }
    }
}