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

            int input = int.Parse(sr.ReadLine());
            int[] result = new int[2];
            for (int i = 0;  i < input; i++)
            {
                int[] nums = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

                result = Calculate(nums);
                for (int j = 0; j < result.Length; j++)
                {
                    sw.Write(result[j] + " ");
                }
                sw.WriteLine();
            }
            sw.Flush();
        }

        static int[] Calculate(int[] nums)
        {
            int[] arr = new int[2];
            int sum = 0;
            int min = int.MaxValue;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] % 2 == 0)
                {
                    sum += nums[i];
                    if (min > nums[i])
                        min = nums[i];
                }
            }
            arr[0] = sum;
            arr[1] = min;

            return arr;
        }
    }
}