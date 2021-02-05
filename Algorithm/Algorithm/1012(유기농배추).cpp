#include<iostream>
#include <vector>
#include <cstring>
using namespace std;

int ve[51][51];
bool check[51][51];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };

int M, n, K; // ���� ���� ������ġ

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
	int T;		// �׽�Ʈ ���̽� ��
	cin >> T;

	for (int q = 0; q < T; q++) // �׽�Ʈ ���̽� �� ��ŭ �ݺ�
	{
		int count = 0;
		cin >> M >> n >> K;
		for (int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;

			ve[x][y] = 1; // ���� ��ġ ���
		}

		for (int i = 0; i < n; i++) // ����
		{
			for (int j = 0; j < M; j++) // ����
			{
				if (!check[j][i] && ve[j][i] == 1) // �Ȱ��� ���̰�, ���߰� �ִ�.
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