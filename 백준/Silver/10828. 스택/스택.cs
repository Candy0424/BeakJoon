using System;
using System.Collections.Generic;
using System.IO;


namespace BeakJoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            Stack<int> stack = new Stack<int>();
            int n = int.Parse(sr.ReadLine());

            for (int i = 0; i < n; i++)
            {
                string str = sr.ReadLine();

                if (str.Contains("push"))
                {
                    string[] str2 = str.Split(' ');
                    stack.Push(int.Parse(str2[1]));
                }
                else if (str.Contains("pop"))
                {
                    if (ClearStackCheck(stack)) sw.WriteLine(-1);

                    else sw.WriteLine(stack.Pop());
                }
                else if (str.Contains("size"))
                {
                    sw.WriteLine(stack.Count);
                }
                else if (str.Contains("empty"))
                {
                    if (ClearStackCheck(stack)) sw.WriteLine(1);
                    else sw.WriteLine(0);
                }
                else if (str.Contains("top"))
                {
                    if (ClearStackCheck(stack)) sw.WriteLine(-1);
                    else sw.WriteLine(stack.Peek());
                }
            }
            sw.Flush();
        }

        static bool ClearStackCheck(Stack<int> s)
        {
            if (s.Count <= 0) return true;
            else return false;
        }
    }
}    