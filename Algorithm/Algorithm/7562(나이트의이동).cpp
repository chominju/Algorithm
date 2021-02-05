#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int ve[301][301];
bool check[301][301];

int dir[8][2] = { {-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}, {-1,-2} };
int l;
pair <int, int> pos_begin;
pair <int, int> pos_end;

int dfs()
{
	queue <pair<int, int>>qu;
	qu.push(pos_begin);
	while (!qu.empty())
	{
		pair<int, int> front = qu.front();
		qu.pop();

		if (front == pos_end)
		{
			return ve[front.second][front.first];
			
		}

		for (int i = 0; i < 8; i++)
		{
			int x = front.first + dir[i][1];
			int y = front.second + dir[i][0];

			if (x >= 0 && x < l&&y >= 0 && y < l&&!check[y][x])
			{
				check[y][x] = true;
				ve[y][x] = ve[front.second][front.first] + 1;
				qu.push(make_pair(x, y));
			}
		}

	}
	return -1;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> l;

		cin >> pos_begin.first >> pos_begin.second;
		cin >> pos_end.first >> pos_end.second;

		cout<<dfs()<<"\n";

		memset(check, false, sizeof(check));
		memset(ve, 0, sizeof(ve));
	}


	return 0;
}