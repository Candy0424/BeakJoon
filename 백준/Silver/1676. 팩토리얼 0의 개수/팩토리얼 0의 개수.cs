using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Reflection;
using System.IO;
using System.Text;
using System.CodeDom;
using System.Collections;
using System.Security.Cryptography;
using System.Data.SqlTypes;
using System.Reflection.Emit;
using System.ComponentModel;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int input = int.Parse(sr.ReadLine());

            int value = ZeroCount(Fact(input));

            sw.WriteLine(value);
            sw.Flush();
        }

        static int ZeroCount(BigInteger big)
        {
            int cnt = 0;

            while (big % 10 == 0)
            {
                if (big == 0) break;

                big /= 10;
                cnt++;
            }

            return cnt;
        }

        static BigInteger Fact(int n)
        {
            int temp = n;
            BigInteger fact = n;
            while (temp > 1)
            {
                temp -= 1;
                fact *= temp;
            }

            return fact;
        }
    }
}