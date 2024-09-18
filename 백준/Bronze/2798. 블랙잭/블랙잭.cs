int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
int n = nm[0];
int m = nm[1];
int[] c = new int[n];
int num = 0;
int max = 0;

c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

foreach (int item in c)
{
    foreach (int item2 in c)
    {
        if (item == item2)
        {
            continue;
        }
        foreach (int item3 in c)
        {
            num = item + item2;

            if (item3 == item || item3 == item2)
            {
                continue;
            }

            num += item3;

            if (num <= m && num > max)
            {
                max = num;
            }
        }
    }
}
Console.WriteLine(max);