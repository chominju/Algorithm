#include<iostream>
#include <vector>
#include <cstring>
using namespace std;

int ve[51][51];
bool check[51][51];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };

int M, n, K; // 가로 세로 배추위치

void dfs(int x, int y)
{
	check[x][y] = true;
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		int tempX = x + dx[i];
		int tempY = y + dy[i];

		if (tempX >= 0 &&tempX<M&& tempY >= 0 && tempY<n &&!check[tempX][tempY] && ve[tempX][tempY])
		{
			 dfs(tempX, tempY);
		}

	}

}

int main()
{
	int T;		// 테스트 케이스 수
	cin >> T;

	for (int q = 0; q < T; q++) // 테스트 케이스 수 만큼 반복
	{
		int count = 0;
		cin >> M >> n >> K;
		for (int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;

			ve[x][y] = 1; // 배추 위치 기록
		}

		for (int i = 0; i < n; i++) // 가로
		{
			for (int j = 0; j < M; j++) // 세로
			{
				if (!check[j][i] && ve[j][i] == 1) // 안갔던 땅이고, 배추가 있다.
				{
					count++;
					dfs(j, i);
				}
			}
		}

		cout << count << "\n";
		memset(ve, 0, sizeof(ve));
		memset(check, false, sizeof(check));
	}


	return 0;
}