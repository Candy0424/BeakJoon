int sum = 0;
int[] input = new int[5];

input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

for (int i = 0; i < input.Length; i++)
{
    input[i] *= input[i];
    sum += input[i];
}

sum %= 10;

Console.WriteLine(sum);