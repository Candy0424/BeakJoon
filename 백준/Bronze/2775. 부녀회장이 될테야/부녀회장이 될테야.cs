int[] arr;
int t = int.Parse(Console.ReadLine());

int temp = 0;

for ( int i = 0; i < t; i++ )
{
    int k = int.Parse(Console.ReadLine());
    int n = int.Parse(Console.ReadLine());

    arr = new int[n];

    for (int x = 1; x <= n; x++)
        arr[x-1] = x;

    for (int y = 0; y < k; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (x == 0)
            {
                arr[x] += x;
            }
            else
            {
                arr[x] += arr[x-1];
            }
        }
    }

    Console.WriteLine(arr[n-1]);
}