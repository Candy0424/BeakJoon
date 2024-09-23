int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

int temp;

int a = input[0];
int b = input[1];

int num = a * b;

int max = Math.Max(a, b);
int min = Math.Min(a, b);

while (true)
{
    if (min == 0)
    {
        Console.WriteLine(max);
        break;
    }
    temp = max % min;
    max = min;
    min = temp;
}

Console.WriteLine(num / max);