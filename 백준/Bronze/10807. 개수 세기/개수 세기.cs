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
            int n = int.Parse(Console.ReadLine());

            int[] num = new int[n];
            num = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            int findN = int.Parse(Console.ReadLine());
            int cnt = 0;

            for (int i = 0; i < num.Length; i++)
            {
                if (findN == num[i])
                {
                    cnt++;
                }
            }

            Console.WriteLine(cnt);
        }
    }
}