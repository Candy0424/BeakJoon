int t = int.Parse(Console.ReadLine());

int r = 0;

string[] str = new string[0] ;
string s = "";

string p = "";


for (int i = 0; i < t; i++)
{
    str = Console.ReadLine().Split(' ');

    r = int.Parse(str[0]);
    s = str[1];
    if (s.Length == 0)
    {
        Console.WriteLine(s);
    }

    for (int j = 0; j < s.Length; j++)
    {
        for (int k = 0; k < r; k++)
        {
            p += s[j];
        }
    }
    Console.WriteLine(p);
    p = "";
}