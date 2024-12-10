using System.IO;

StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());

int[] arr = new int[10001];
for (int i = 0; i < n; i++)
{
    arr[int.Parse(sr.ReadLine())]++;
}

for (int i = 0; i < arr.Length; i++)
{
    if (arr[i] != 0)
    {
        for (int j = arr[i]; j > 0 ; j--)
        {
            sw.WriteLine(i);
        }
    }
}

sw.Flush();