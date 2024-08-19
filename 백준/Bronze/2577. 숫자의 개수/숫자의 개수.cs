int a = int.Parse(Console.ReadLine());
int b = int.Parse(Console.ReadLine());
int c = int.Parse(Console.ReadLine());

int num = 0;

string str = (a * b * c).ToString();

int[] arr = new int[10];

for (int i = 0; i <= 9; i++)
{
    for (int j = 0; j < str.Length; j++)
    {
        if (str[j] == char.Parse(i.ToString()))
        {
            num++;

        }
    }
    arr[i] = num;
    num = 0;
}

for (int i = 0; i < arr.Length; i++)
{
    Console.WriteLine(arr[i]);
}