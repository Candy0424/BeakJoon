#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

	int n, m;

	cin >> n;

    vector<int> arr1(n);

	for (int i = 0; i < n; ++i)

	{

		cin >> arr1[i];

	}

    

	cin >> m;

    vector<int> arr2(m);

	for (int i = 0; i < m; ++i)

	{

		cin >> arr2[i];

	}

	sort(arr1.begin(), arr1.end(), [](int a, int b) {return a < b; });

	for (int i = 0; i < arr2.size(); ++i)

	{

		int mid, high = arr1.size()-1, low = 0;

        if (arr1.size() == 1)

            cout << ( arr1[0] == arr2[i] ? 1 : 0) << '\n';

        else

		    while (true)

		    {

		    	mid = (high + low) / 2;

                

		    	if (arr1[mid] == arr2[i])

                {

                   cout << 1 << '\n';

			   	break;

			    }

                else if (low >= high)

                {

                    cout << 0 << '\n';

                    break;

                }

			

		    	if (arr1[mid] > arr2[i])

			    {

			    	high = mid - 1;

                    if (high < 0)

                        high = 0;

			    }

		    	else

		    	{

			    	low = mid + 1;

                    if (low > arr1.size())

                        low = arr1.size()-1;

		    	}

		    }

    }

}