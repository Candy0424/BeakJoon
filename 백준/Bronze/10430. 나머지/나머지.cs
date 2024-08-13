using System;

namespace beakjoon
{
    class 백준
    {
        static void Main()
        {
            string n = Console.ReadLine();
            string[] s = n.Split(' ');
            
            
            int A = int.Parse(s[0]);
            int B = int.Parse(s[1]);
            int C = int.Parse(s[2]);
            
            
            Console.WriteLine((A + B) % C);
            Console.WriteLine((A % C + B % C) % C);
            Console.WriteLine((A * B) % C);
            Console.WriteLine((A % C) * (B%C) % C);
        }
    }
}