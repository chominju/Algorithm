#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	int num = 1;
	if (n == 1)
		num = arr[0] * arr[0];
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i == 0 || i == n - 1)
			{
				num *= arr[i];
			}
		}
	}

	cout << num;

	return 0;
}