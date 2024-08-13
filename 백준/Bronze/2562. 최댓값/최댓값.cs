using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace My_C_
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int max = 0;
            int[] a = new int[9];
            int count = 0;

            for (int i = 0; i < 9; i++) // 9번 반복
            {
                a[i] = int.Parse(Console.ReadLine());// 아니 ㅅㅂ 뭔데
                if (max < a[i]) // 최댓값 판별
                {
                    max = a[i];
                    count = i + 1;
                }
            }
            Console.WriteLine($"{max}\n{count}");
        }
    }
}
