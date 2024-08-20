int[] t = new int[8];

t = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

string s = "";

for (int i = 0; i < t.Length; i++)
{
    s += t[i];
}

switch (s)
{
    case "12345678":
        {
            Console.WriteLine("ascending");
            break;
        }
    case "87654321":
        {
            Console.WriteLine("descending");
            break;
        }
    default:
        {
            Console.WriteLine("mixed");
            break;
        }
}