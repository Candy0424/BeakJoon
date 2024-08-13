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
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());

            int one = b % 10;
            int ten = b % 100 - one;
            int hun = b / 100 * 100;

            int i = one * a;
            int j = ten * a;
            int k = hun * a;

            
            Console.WriteLine(i);
            Console.WriteLine(j /10);
            Console.WriteLine(k /100);
            Console.WriteLine(a * b);
        }
    }
}
