string str = Console.ReadLine().Trim();

int num = 1;

foreach (char a in str)
{
    if (a == ' ')
    {
        num++;
    }
}

if (str.Length == 0)
{
    num--;
}

Console.WriteLine(num);