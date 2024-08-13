string n = Console.ReadLine();
string[] nn = n.Split(' ');;

int A = int.Parse(nn[0]);
int B = int.Parse(nn[1]);

if (A > B)
{
    Console.WriteLine('>');
}
else if ( A < B)
{
    Console.WriteLine('<');
}

else
    Console.WriteLine("==");