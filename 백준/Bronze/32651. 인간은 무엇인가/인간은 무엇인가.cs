using System;
using System.Linq;
using System.IO;
namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int input = int.Parse(sr.ReadLine());

            int[] rememberNum = new int[1000];

            for (int i = 1;  i < rememberNum.Length; i++)
            {
                int temp = 2024 * i;
                if (temp > 100000) break;

                rememberNum[i] = temp;
            }

            if (rememberNum.Contains(input))
                sw.WriteLine("Yes");
            else
                sw.WriteLine("No");

            sw.Flush();

            
        }
    }
}