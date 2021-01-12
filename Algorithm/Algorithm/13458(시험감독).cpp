#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	long long *arr = new long long[n+1];
	for (int j = 0; j < n; j++)
	{
		cin >> arr[j];
	}

	int b, c;
	cin >> b >> c;

	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		double temp = arr[i];

		sum++;
		if (b >= arr[i])
		{
			temp = 0;
		}
		else
			temp = arr[i] - b;

		sum += ceil(temp / c);
	}

	cout << sum;

	delete[]arr;
	return 0;
}