#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[6] = { 500,100,50,10,5,1 };

	int left = 1000 - n;
	int cnt = 0;
	
	for (int i = 0; i<6; i++)
	{
		int temp = left / arr[i];
		if (temp)
		{
			cnt += temp;
			left -= temp * arr[i];
		}
	}

	cout << cnt;

	return 0;
}