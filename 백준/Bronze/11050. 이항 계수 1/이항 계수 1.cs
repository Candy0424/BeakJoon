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


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int[] input = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

            int n = input[0];
            int k = input[1];


            int num = Fac(n) / (Fac(k) * Fac(n-k));

            Console.WriteLine(num);
        }

        static int Fac(int value)
        {
            if (value <= 0) return 1;

            int temp = value;

            for (int i = temp-1; i > 0; i--)
            {
                value *= i;
            }

            return value;
        }
    }
}