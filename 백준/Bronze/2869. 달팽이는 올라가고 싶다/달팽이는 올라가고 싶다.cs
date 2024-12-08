int[] t = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

// 올라갈 높이, 미끄러지는 양, 목표 높이
double a = t[0];
double b = t[1];
double v = t[2];

// 걸리는 날
int date = (int)Math.Ceiling((v-a) / (a-b)) + 1;

Console.WriteLine(date);