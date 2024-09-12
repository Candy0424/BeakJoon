int n = int.Parse(Console.ReadLine());

int a = n;
int b;
int num;

for ( int i = 1; i < n; i++)
{
    b = i;
    num = b;
    while (true)
    {
        if (b == 0) break;

        num += b % 10;
        b /= 10;
    }
    if (num == n)
    {
        Console.WriteLine(i);
        return;
    }
}
Console.WriteLine(0);