int sum = 0;

int n = int.Parse(Console.ReadLine());

string r = "";
r = Console.ReadLine();

for (int i = 0; i < r.Length; i++)
{
    sum += int.Parse(r[i].ToString());
}

Console.WriteLine(sum);