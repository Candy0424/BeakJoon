int input = int.Parse(Console.ReadLine());
int a;
int b;
int max;
int min;
int temp;
int num;
int[] n;
for (int i = 0; i < input; i++)
{
    n = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
    a = n[0];
    b = n[1];
    max = Math.Max(a, b);
    min = Math.Min(a, b);
    num = a * b;

    while (true)
    {
        if (min == 0)
        {
            break;
        }
        temp = max % min;
        max = min;
        min = temp;
    }
    Console.WriteLine(num / max);
}