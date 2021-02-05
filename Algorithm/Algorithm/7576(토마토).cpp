#include <iostream>
#include <queue>
using namespace std;

int ve[1001][1001];

int dirPos[4][2] = { {0,1},{0,-1},{1,0},{-1,0} }; // �� �� �� ��

queue <pair<int,int>> qu;

int m, n;

void bfs()
{
	while (!qu.empty())
	{
		pair<int, int> curPos;	// ���� ��ġ
		curPos = qu.front();
		qu.pop();

		for (int i = 0; i < 4; i++)
		{
			pair<int, int> tempPos;
			tempPos.first = curPos.first + dirPos[i][0];
			tempPos.second = curPos.second + dirPos[i][1];

			if (tempPos.first >= 0 && tempPos.first < m&&tempPos.second >= 0 && tempPos.second < n&&ve[tempPos.second][tempPos.first] == 0)
			{
				qu.push(tempPos);
				ve[tempPos.second][tempPos.first] = ve[curPos.second][curPos.first] + 1;
			}
		}


	}
}

int main()
{
	cin >> m >> n; // m : ����   n : ����

	for (int i = 0; i < n; i++)	// �迭 �Է�
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ve[i][j];
			if (ve[i][j] == 1)
				qu.push(make_pair(j, i));	// ���� �丶���� ��ǥ�� �ֱ�
		}
	}

	bfs();

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ve[i][j] == 0) // 0���� �ִ�?
			{
				cout << "-1";
				return 0;
			}
			if (max <= ve[i][j])
				max = ve[i][j];
		}
	}

	cout << max - 1;
	return 0;
}