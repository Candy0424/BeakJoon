string input;
string reverse = null;

while (true)
{
    input = Console.ReadLine();
    if (input[0] == '0')
    {
        break;
    }

    for (int i = input.Length - 1; i >= 0; i--)
    {
        reverse += input[i];
    }

    if (input == reverse)
    {
        Console.WriteLine("yes");
    }
    else
    {
        Console.WriteLine("no");
    }
    reverse = null;
}