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

            for (int i = 0; i < input; i++)
            {
                BigInteger n = BigInteger.Parse(sr.ReadLine());
                if (n % 2 == 0) sw.WriteLine("even");
                else sw.WriteLine("odd");
            }
            sw.Flush();
        }
    }
}