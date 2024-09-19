int n = int.Parse(Console.ReadLine());

for (int i = 2; i < i * i; i++)
{
    while (n % i == 0)
    {
        Console.WriteLine(i);
        n /= i;
    }
}

if (n > 1)
{
    Console.WriteLine(n);
}