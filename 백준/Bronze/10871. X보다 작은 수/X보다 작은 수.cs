using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] t = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] a = new int[t[0]];

            int x = t[1];

            a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            for (int i = 0; i < a.Length; i++)
            {
                if (a[i] < x)
                {
                    Console.Write(a[i] + " ");
                }
            }
        }
    }
}