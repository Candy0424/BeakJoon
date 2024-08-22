List<int> s = new List<int>();
List<int> numlist = new List<int>();

for (int i = 0; i < 10; i++)
{
    s.Add(int.Parse(Console.ReadLine()) % 42);
}

for (int i = 0; i < s.Count; i++)
{
    if (!numlist.Contains(s[i]))
    {
        numlist.Add(s[i]);
    }
}

Console.WriteLine(numlist.Count);