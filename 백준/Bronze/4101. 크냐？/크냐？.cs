while (true)
      {
        int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        int a = input[0];
        int b = input[1];

        if (a == 0 && b == 0)
        {
            break;
        }
        
        if (a > b)
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }

      }