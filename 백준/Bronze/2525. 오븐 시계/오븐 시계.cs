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
            int[] hm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int time = int.Parse(Console.ReadLine());
            int h = hm[0];
            int m = hm[1];
            
            h += time / 60;
            m += time % 60;

            if (m >= 60)
            {
                h++;
                m -= 60;
            }
            if (h >= 24)
            {
                h -= 24;
            }
            Console.WriteLine($"{h} {m}");

        }
    }
}