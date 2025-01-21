using System.Linq;
using System;
using System.Collections.Generic;
using System.IO;

namespace BeakJoon
{
    internal class Program
    {
        static StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        static StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        static void Main(string[] args)
        {
            char[] arr = new char[]
            {
                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'n', 'm', 'o', 'p',
                'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
            };

            List<char> list = new List<char>();
            

            int length = 0;

            while (true)
            {
                string str = sr.ReadLine().ToLower();
                if (str == "#")
                    break;

                for (int i = 0;  i < str.Length; i++)
                {
                    if (list.Contains(str[i]))
                        continue;
                    else if (arr.Contains(str[i]))
                    {
                        length++;
                        list.Add(str[i]);
                    }
                }

                list.Clear();
                sw.WriteLine(length);
                length = 0;
            }

            sw.Flush();
        }
    }
}