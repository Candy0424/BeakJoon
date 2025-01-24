using System;
using System.IO;

namespace BeakJoon
{
    internal class Program
    {
        static StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        static StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        static void Main(string[] args)
        {
            int max = int.MinValue;
            int input = int.Parse(sr.ReadLine());
            for (int i = 0; i < input; i++)
            {
                string str = sr.ReadLine();
                int temp1 = 0;

                for (int j = 0; j < str.Length; j++)
                {
                    if (j + 1 < str.Length && j + 2 < str.Length)
                    {
                        if ((str[j] == 'f' && str[j + 1] == 'o' && str[j + 2] == 'r'))
                        {
                            temp1++;

                            if (temp1 > max)
                                max = temp1;
                        }
                        else if (j + 4 < str.Length)
                        {
                            if (((str[j] == 'w' && str[j + 1] == 'h' && str[j + 2] == 'i' && str[j + 3] == 'l' && str[j + 4] == 'e')))
                            {
                                temp1++;

                                if (temp1 > max)
                                    max = temp1;
                            }
                        }
                    }
                }
                if (max < 0)
                {
                    max = 0;
                }
            }


            sw.WriteLine(max);
            sw.Flush();
        }
    }
}