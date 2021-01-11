#include <iostream>

using namespace std;

int main()
{
	long long arr[101] = {0,1,1,1,2,2,3,4,5,7,9,12, };
	
	int t;
	int n;
	cin >> t;

	for (int j = 0; j < t; j++)
	{
		cin >> n;

		if (n >= 9)
		{
			for (int i = 9; i <= n; i++)
			{
				arr[i] = arr[i - 1] + arr[i - 5];
			}
		}
		cout << arr[n]<<"\n";
	}
	return 0;
}