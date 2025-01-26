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
            int n = int.Parse(sr.ReadLine());

            int[,] arr = new int[2, n];

            int k = 1;

            for (int i = 0; i < n; i++)
            {
                int[] input = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

                int x = input[0];
                int y = input[1];

                arr[0, i] = x;
                arr[1, i] = y;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0;  j < n; j++)
                {
                    if (arr[0, i] < arr[0, j] && arr[1, i] < arr[1, j])
                        k++;
                }
                sw.Write(k + " ");
                k = 1;
            }

            sw.Flush();
        }
    }
}