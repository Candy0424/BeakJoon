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
            BigInteger input = BigInteger.Parse(Console.ReadLine());

            Console.WriteLine(input % 20000303);
        }
    }
}