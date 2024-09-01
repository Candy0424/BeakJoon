using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Reflection;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());

            int[] n = new int[t];
            float m = 0;
            float sum = 0;

            n = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            float max = n[0];


            for (int i = 1; i < n.Length; i++)
            {
                max = Math.Max(max, n[i]);
            }
            for (int i = 0; i < n.Length; i++)
            {
                sum += n[i] / max * 100;
            }

            Console.WriteLine(sum / t);
        }
    }
}