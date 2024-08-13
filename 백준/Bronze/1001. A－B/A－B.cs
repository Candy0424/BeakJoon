using System;

namespace ca
{
    class program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split(' ');
            int A = int.Parse(ss[0]);
            int B = int.Parse(ss[1]);
            
            Console.WriteLine(A - B);
        }
    }
}