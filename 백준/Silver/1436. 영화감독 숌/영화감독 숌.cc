#include<iostream>

#include<string>

using namespace std;

int main()

{

    int n;

    

    cin >> n;

    

    int cnt = 0;

    int num = 666;

    int result = 0;

    

    while (true)

    {

        if (cnt == n)

            break;

        

        string str = to_string(num);

        int sixNum = 0;

        for (int i = 0; i < str.length(); ++i)

        {

            if (sixNum >= 3)

                break;

        

            if(str[i] == '6')

                sixNum++;

            else

                sixNum = 0;

        }

        

        if (sixNum >= 3)

        {

            result = num;

            cnt++;

        }

        

        num++;

    }

    

    cout << result << '\n';

    return 0;

}