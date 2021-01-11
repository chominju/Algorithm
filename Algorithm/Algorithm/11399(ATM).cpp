#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec;
	vector<int> sum;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	
	sort(vec.begin(), vec.end());

	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		temp += + vec[i];
		sum.push_back(temp);
	}

	int time = 0;
	for (int i = 0; i < n; i++)
	{
		time += sum[i];
	}

	cout << time;

	return 0;
}