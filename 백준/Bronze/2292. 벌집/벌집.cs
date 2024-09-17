int n = int.Parse(Console.ReadLine());

int num = 1, room = 1;
while (true)
{
    if (n <= room)
    {
        Console.WriteLine(num);
        break;
    }

    room += 6 * num;
    num++;
}