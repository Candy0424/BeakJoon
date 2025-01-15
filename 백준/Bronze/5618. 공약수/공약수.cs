using System;
using System.IO;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int max = int.MinValue;

            int input = int.Parse(sr.ReadLine());

            int[] nums = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

            int[] arr = new int[1001];

            for (int i = 0; i < nums.Length; i++)
            {
                arr[i] = nums[i];

                if (nums[i] > max)
                    max = nums[i];
            }

            if (input == 2)
            {
                for (int i = 1; i <= max; i++)
                    if (arr[0] % i == 0 && arr[1] % i == 0)
                        sw.WriteLine(i);
            }
            else if (input == 3)
            {
                for (int i = 1; i <= max; i++)
                    if (arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0)
                        sw.WriteLine(i);
            }

            sw.Flush();
        }

    }
}