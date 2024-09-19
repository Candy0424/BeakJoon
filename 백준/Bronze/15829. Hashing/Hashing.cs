using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Reflection;
using System.IO;
using System.Text;
using System.CodeDom;
using System.Collections;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int r = 31;
            BigInteger m = 1234567891;

            BigInteger l = BigInteger.Parse(Console.ReadLine());

            BigInteger value;

            int num;

            List<int> nums = new List<int>();

            BigInteger hashing = 0;

            string input = Console.ReadLine();

            foreach (char item in input)
            {
                num = 0;
                for (char i = 'a'; i <= item; i++)
                {
                    num++;
                }
                nums.Add(num);
            }
            
            for (int i = 0; i < input.Length; i++)
            {
                if (i == 0)
                {
                    value = 1;
                }
                else
                {
                    value = r;
                }
                for (int j = 2; j <= i; j++)
                {
                    value *= r;
                }
                hashing += (nums[i] * value);
            }
            Console.WriteLine(hashing % m);
        }
    }
}