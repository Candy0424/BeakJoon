StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
int a = 0;
int num = 0;
int n = int.Parse(sr.ReadLine());
int[] t1 = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);
int[] t2 = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);
int t = t2[0];
int p = t2[1];

int resultT = 0;
int resultP1 = 0;

foreach (var i in t1)
{
    a += i;
    num += i;
}
if (a == n)
{
    for (int i = 0; i < t1.Length; i++)
    {
        a = t1[i];
        while (a > 0)
        {
            a -= t;
            resultT++;
        }
    }

    while (num >= p)
    {
        num -= p;
        resultP1++;
    }
    sw.WriteLine(resultT);
    sw.WriteLine(resultP1 + " " + num);
    sw.Flush();
}