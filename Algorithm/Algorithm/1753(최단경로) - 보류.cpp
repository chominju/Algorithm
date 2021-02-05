#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

int dir[20001]; // 각각의 값

vector<pair<pair<int, int>,int>> ve;

using namespace std;


int main()
{
	int v, e;
	cin >> v >> e;
	int index;
	cin >> index;

	pair<pair<int, int>, int> p;
	for (int i = 0; i < e; i++)				// 입력받기
	{
		cin >> p.first.first >> p.first.second >> p.second;
		ve.push_back(p);
	}

	sort(ve.begin(), ve.end());
	memset(dir, INFINITY, sizeof(dir));
	dir[index] = 0;

	while (1)
	{
		if()
		dir[ve[i].first.second] = min()
	}

	return 0;
}