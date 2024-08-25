string s = Console.ReadLine().ToLower();

for (char c = 'a'; c <= 'z'; c++)
{
    if (s.Contains(c))
    {
        Console.Write(s.IndexOf(c)+ " ");
    }else
    {
        Console.Write(-1 + " ");
    }
}