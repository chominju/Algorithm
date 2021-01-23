#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	vector<int> arr;

	long long temp = 0;
	long long sum = 0;
	bool check = true;
	while (n!=0)
	{
		temp = n % 10;
		sum += temp;
		arr.push_back(temp);
		n /= 10;

		if (temp == 0)
			check = false;
	}

	if (check||sum%3!=0) // 0¾øÀ½
		cout << -1;
	else
	{
		sort(arr.begin(), arr.end());
		for (int i = arr.size() - 1; i >= 0; i--)
			cout << arr[i];
	}

	return 0;
}