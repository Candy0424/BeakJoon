string str = Console.ReadLine();

for (int i = 0; i < str.Length; i++)
{
    if (str[i].ToString() == str[i].ToString().ToLower())
    {
        Console.Write(str[i].ToString().ToUpper());
    }
    else
    {
        Console.Write(str[i].ToString().ToLower());
    }
}