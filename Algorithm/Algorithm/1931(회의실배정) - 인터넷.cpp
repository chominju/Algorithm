#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	else
	{
		return a.second < b.second;
	}
}

int main()
{
	int n;
	cin >> n;

	vector <pair<int, int>> arr;
	pair <int, int> time;

	for (int i = 0; i < n; i++)
	{
		cin >> time.first >> time.second;
		arr.push_back(time);
	}

	sort(arr.begin(), arr.end(), comp);

	int cur = arr[0].second;
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (cur <= arr[i].first)
		{
			cnt++;
			cur = arr[i].second;
		}
	}

	cout << cnt;



	return 0;
}