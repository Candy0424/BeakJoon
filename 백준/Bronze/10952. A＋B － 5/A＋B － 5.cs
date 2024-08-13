while (true)
{
    int[] str = Array.ConvertAll(Console.ReadLine(). Split(' '), int.Parse);
    if (str[0] == 0 || str[1] == 0)
    {
        break;
    }
    else
    {
        Console.WriteLine(str[0] + str[1]);
    }
}