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

            string str = "";
            string input = "";
            string[] arr = new string[3];
            for (int i = 0; i < 3; i++)
            {
                input = sr.ReadLine();

                arr[i] = input;
            }

            string num = arr.Last();

            int length = arr.Length - 1;
            int temp = 1;

            /*980803
            980804
            FizzBuzz*/
            while (true)
            {
                if (num == "Fizz" || num == "Buzz" || num == "FizzBuzz")
                {
                    num = arr[--length];
                }
                else
                {
                    str = FizzBuzz(Convert.ToInt32(num) + temp);
                    break;
                }
                temp++;
            }

            sw.WriteLine(str);
            sw.Flush();
        }

        static string FizzBuzz(int value)
        {
            int i = value;
            if (i % 3 == 0 && i % 5 == 0)
                return "FizzBuzz";
            else if (i % 3 == 0 && i % 5 != 0)
                return "Fizz";
            else if (i % 5 == 0 && i % 3 != 0)
                return "Buzz";
            else
                return i.ToString();
        }
    }
}