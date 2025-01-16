using System;
using System.Collections.Generic;
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

            int n = input[0];
            int k = input[1];

            List<int> arr = new List<int>();

            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    arr.Add(i);
                }
            }

            if (arr.Count < k || k > n || k < 1)
            {
                sw.WriteLine(0);
            }
            else
                sw.WriteLine(arr[k-1]);


            sw.Flush();
        }
    }
}