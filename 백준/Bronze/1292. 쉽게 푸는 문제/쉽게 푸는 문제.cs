List<int> list = new List<int>();

int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

int a = input[0];
int b = input[1];
int num = 0;

for (int i = 0; i < 1000; i++)
{
    for (int j = 1; j <= i; j++)
    {
        list.Add(i);
    }
}

for (int i = a; i <= b; i++ )
{
    num += list[i-1];
}
Console.WriteLine(num);