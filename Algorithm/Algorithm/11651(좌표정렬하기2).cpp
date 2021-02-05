#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int>a, pair<int, int>b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	int n;
	vector<pair<int, int>> pos;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		pos.push_back(temp);
	}

	sort(pos.begin(), pos.end(), comp);

	for (int i = 0; i < n; i++)
		cout << pos[i].first << " " << pos[i].second << "\n";

	return 0;
}