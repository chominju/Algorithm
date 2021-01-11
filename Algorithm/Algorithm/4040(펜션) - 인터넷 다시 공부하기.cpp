#include <iostream>

using namespace std;

int n, m;
int begin_day;
int end_day;

char arr[101][31];

int greedy(int index)
{
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		int day = 0;
		for (int j = index; j < end_day - 1; j++)
		{
			if (arr[j][i] == 'O')
				day++;
			else
				break;
		}
		if (max < day)
			max = day;
	}
	return max;
}

int main()
{
	// n : ��ǿ��� �����ϴ� ���� ������ �� �Ⱓ(1~100)
	// m : ����� �����ϰ� �ִ� ���� ����(3~30)
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	cin >> begin_day >> end_day;

	int cnt = -1; // ���� �ٲ� Ƚ��

	for (int i = begin_day - 1; i < end_day - 1;)
	{
		cnt++;

		// ������ �Ұ��� �� ���
		if (greedy(i) == 0)
		{
			cnt = -1;
			break;
		}

		// ���డ��
		i += greedy(i);
	}

	cout << cnt;

	return 0;
}