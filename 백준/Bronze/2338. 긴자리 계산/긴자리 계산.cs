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


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            string b = Console.ReadLine();

            Console.WriteLine(BigInteger.Parse(a) + BigInteger.Parse(b));
            Console.WriteLine(BigInteger.Parse(a) - BigInteger.Parse(b));
            Console.WriteLine(BigInteger.Parse(a) * BigInteger.Parse(b));
        }
    }
}