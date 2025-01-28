int max = int.MinValue;
int avg = 0;
Dictionary<int, int> dic = new Dictionary<int, int>();
for (int i = 0; i < 10; i++)
{
    int num = int.Parse(Console.ReadLine());
    avg += num;
    if (dic.ContainsKey(num))
    {
        dic[num]++;
    }
    else
        dic.Add(num, 1);
}
foreach (var num in dic)
{
    if (max < num.Value)
        max = num.Value;
}

foreach(var num in dic)
{
    if (num.Value == max)
        max = num.Key;
}

Console.WriteLine(avg /= 10);
Console.WriteLine(max);