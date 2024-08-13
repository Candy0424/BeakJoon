string x = Console.ReadLine();
            string y = Console.ReadLine();

            int a = int.Parse(x);
            int b = int.Parse(y);

            if ( a > 0 && b > 0)
            {
                Console.WriteLine(1);
            }

            else if ( a < 0 && b > 0)
            {
                Console.WriteLine(2);
            }

            else if (a < 0 && b < 0)
            {
                Console.WriteLine(3);
            }

            else if (a > 0 && b < 0)
            {
                Console.WriteLine(4);
            }