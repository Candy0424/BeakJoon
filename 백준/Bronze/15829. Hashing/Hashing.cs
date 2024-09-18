int r = 31;
int m = 1234567891;

int l = int.Parse(Console.ReadLine());

int num = 0;

List<int> nums = new List<int>();

int p = 0;

int hashing = 0;

int value = 0;

string input = Console.ReadLine().ToLower();

foreach (char item in input)
{
    num = 0;
    for (char i = 'a'; i <= item; i++)
    {
        num++;
    }
    nums.Add(num);
}

for (int i = 0; i < input.Length; i++)
{
    value = r;

    double pow = Math.Pow(value, i);
    hashing += nums[i] * Convert.ToInt32(pow);
}

Console.WriteLine(hashing % m);