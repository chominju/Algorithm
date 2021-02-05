#include <iostream>
#include <string>
#include <queue>

using namespace std;

int n, m;
int dir[4][2] = { {0,-1},{1,0},{0,1},{-1,0} }; // ก่ กๆ ก้ ก็
int ve[101][101];
queue<pair<int, int>>qu;

void bfs()
{
	qu.push(make_pair(0, 0));
	pair <int, int>cur;
	int x, y;
	while (!qu.empty())
	{
		cur = qu.front();
		qu.pop();

		for (int i = 0; i < 4; i++)
		{
			x = cur.second + dir[i][0];
			y = cur.first + dir[i][1];

			if (x >= 0 && x < m&&y >= 0 && y < n&&ve[y][x] == 1)
			{
				qu.push(make_pair(y, x));
				ve[y][x] = ve[cur.first][cur.second] + 1;
			}
		}
	}
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < m; j++)
			ve[i][j] = str[j] - '0';
	}

	bfs();

	cout << ve[n - 1][m - 1];

	return 0;
}