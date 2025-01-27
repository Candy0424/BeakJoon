using System;
using System.Linq;
using System.IO;

namespace BeakJoon
{
    internal class Program
    {
        static StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        static StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        static void Main(string[] args)
        {
            int input = int.Parse(sr.ReadLine());

            int[] arr = new int[input];

            for (int i = 0;  i < input; i++)
            {
                int num = int.Parse(sr.ReadLine());

                arr[i] = num;
            }

            var result = arr.OrderBy(x => x);

            foreach (var item in result)
            {
                sw.WriteLine(item);
            }

            sw.Flush();
        }
    }
}