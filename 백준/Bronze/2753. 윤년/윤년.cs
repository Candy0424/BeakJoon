string year = Console.ReadLine();

            int a = int.Parse(year);

            if (a % 4 == 0 && a % 100 > 0)
            {
                Console.WriteLine(1);
            }

            else if (a % 400 == 0)
            {
                Console.WriteLine(1);
            }

            else 
            {
                Console.WriteLine(0);
            }