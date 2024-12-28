using System;

class HelloWorld {
  static void Main() {
      int n = int.Parse(Console.ReadLine());

      for ( int i = 0; i < n; i++)
      {
          string str = Console.ReadLine();
          char a = str.First();
          char b = str.Last();

          Console.WriteLine($"{a}{b}");
      }
  }
}
