using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;

namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());

            int max = int.MinValue;
            int maxNum = int.MinValue;
            int minNum = int.MaxValue;
            int mode = 0;
            int[] arr = new int[8001];
            double avg = 0.0;
            int mid = 0;
            int gap = 0;

            List<int> list = new List<int>();
            List<int> modeList = new List<int>();
            for (int i = 0; i < input; i++)
            {
                int num = int.Parse(Console.ReadLine());

                if (num < 0)
                {
                    int temp = num * -1;
                    arr[4000 + temp]++;
                    if (arr[4000 + temp] > max)
                    {
                        max = arr[4000 + temp];
                        mode = num;
                    }
                }
                else if (num >= 0)
                {
                    arr[num]++;
                    if (arr[num] > max)
                    {
                        max = arr[num];
                        mode = num;
                    }
                }

                if (num > maxNum)
                    maxNum = num;
                if (num < minNum)
                    minNum = num;

                avg += num;
                list.Add(num);
            }
            list = list.OrderBy(x => x).ToList();
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] == max)
                {
                    if (i > 4000)
                        modeList.Add(4000 - i);
                    else if (i <= 4000)
                        modeList.Add(i);
                }
            }

            if (modeList.Count > 1)
            {
                modeList = modeList.OrderBy(x => x).ToList();
                mode = modeList[1];
            }


            mid = list[list.Count / 2];
            gap = maxNum - minNum;
            avg = Math.Round(avg /= input, 0);
            if (avg == -0.0)
                Console.WriteLine(0);
            else
                Console.WriteLine(avg);
            Console.WriteLine(mid);
            Console.WriteLine(mode);
            Console.WriteLine(gap);
        }
    }
}