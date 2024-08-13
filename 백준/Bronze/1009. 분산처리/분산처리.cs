int sum = 0;

int n = int.Parse(Console.ReadLine());

int[] input;

for (int i = 0; i < n; i++)
{
    input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
    int a = input[0];
    int b = input[1] % 4 + 4;
    sum = a;
    for (int j = 1; j < b; j++)
    {
        sum *= a;
        sum %= 10;
        if (sum == 0)
        {
            sum = 10;
        }
    }
    Console.WriteLine(sum);
}