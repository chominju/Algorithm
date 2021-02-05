#include <iostream>
#include <string>
#include <stack>
using namespace std;

int ve[101][101];
bool check[101][101];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
int n, M;
int cnt = 0;
void bfs(pair<int,int> pos)
{
	stack<pair<int,int>> st;
	st.push(pos);
	pair<int, int> tempPos = pos;
	check[tempPos.first][tempPos.second] = true;
	while (1)
	{
		pair<int, int> frontPos = st.top();

		if (frontPos.first == n-1 && frontPos.second == M-1)
			break;
		int count = 0;
		for (int i = 0; i < 4; i++)
		{
			tempPos.first= frontPos.first + dx[i];
			tempPos.second = frontPos.second + dy[i];

			if (tempPos.first >= 0 && tempPos.second >= 0 && tempPos.first < n&&tempPos.second < M && !check[tempPos.first][tempPos.second] && ve[tempPos.first][tempPos.second] == 1)
			{
				check[tempPos.first][tempPos.second] = true;
				st.push(tempPos);
			}
			else
				count++;

		}
		if (count == 4)
			st.pop();
	}

	cout << st.size();
}


int main()
{
	cin >> n >> M; // N x M

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < M; j++)
			ve[i][j] = str[j] - '0';
	}

	pair<int, int> begin;
	begin.first = 0;
	begin.second = 0;
	bfs(begin);

	return 0;
}