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
            int[] input = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

            int a = input[0];
            int b = input[1];

            string strA = a.ToString();
            string strB = b.ToString();

            List<int> list = new List<int>();

            int temp = 0;

            int one = 0;
            int two = 0;

            int aLIdx = strA.Length - 1;
            int bLIdx = strB.Length - 1;

            while (true)
            {
                if (aLIdx - temp < 0 && bLIdx - temp < 0)
                    break;
                else if (aLIdx - temp >= 0 && bLIdx - temp < 0)
                {
                    one = int.Parse(strA[aLIdx - temp].ToString());
                    two = 0;
                }
                else if (bLIdx - temp >= 0 &&  aLIdx - temp < 0)
                {
                    one = 0;
                    two = int.Parse(strB[bLIdx - temp].ToString());
                }
                else if (aLIdx - temp >= 0 && bLIdx - temp >= 0)
                {
                    one = int.Parse(strA[aLIdx - temp].ToString());
                    two = int.Parse(strB[bLIdx - temp].ToString());
                }

                int result = one + two;

                list.Add(result);
                temp++;
            }

            for (int i = list.Count - 1; i >= 0; i--)
            {
                sw.Write(list[i]);
            }
            sw.WriteLine();
            sw.Flush();
        }
    }
}