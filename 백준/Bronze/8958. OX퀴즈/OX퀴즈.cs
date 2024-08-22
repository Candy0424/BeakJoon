int num = 0;
int sum = 0;

int t = int.Parse(Console.ReadLine());

string s = "";

for (int i = 0; i < t; i++)
{
    s = Console.ReadLine();

    for (int j = 0; j < s.Length; j++)
    {
        if (s[j] == 'O')
        {
            num++;
            sum += num;
        }
        else if (s[j] == 'X')
        {
            num = 0;
        }
    }
    Console.WriteLine(sum);
    num = 0;
    sum = 0;
}