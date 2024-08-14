string strsum = "";
int numsum = 0;

int a = int.Parse(Console.ReadLine());
int b = int.Parse(Console.ReadLine());
int c = int.Parse(Console.ReadLine());

numsum = (a + b) - c;
strsum = (a.ToString() + b.ToString());
int e = int.Parse(strsum) - c;
Console.WriteLine(numsum);
Console.WriteLine(e);