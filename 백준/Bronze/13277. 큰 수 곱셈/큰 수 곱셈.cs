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
            /*StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));*/

            BigInteger[] input = Array.ConvertAll(Console.ReadLine().Split(' '), BigInteger.Parse);

            BigInteger a = input[0];
            BigInteger b = input[1];


            Console.WriteLine(a * b);
        }
    }
}