int input = int.Parse(Console.ReadLine());

List<string> list = new List<string>();
List<string> list2 = new List<string>();
for (int i = 0; i < input; i++)
{
    string str = Console.ReadLine();
    list.Add(str);
}

list2 = list.Distinct().ToList();
list2 = list2.OrderBy(x => x.Length).ThenBy(x => x).ToList();

foreach (string str in list2)
{
    Console.WriteLine(str);
}