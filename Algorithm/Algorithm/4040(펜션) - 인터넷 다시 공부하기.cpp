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
	// n : 펜션에서 관리하는 여름 성수기 총 기간(1~100)
	// m : 펜션이 보유하고 있는 방의 개수(3~30)
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	cin >> begin_day >> end_day;

	int cnt = -1; // 방을 바꾼 횟수

	for (int i = begin_day - 1; i < end_day - 1;)
	{
		cnt++;

		// 예약이 불가능 한 경우
		if (greedy(i) == 0)
		{
			cnt = -1;
			break;
		}

		// 예약가능
		i += greedy(i);
	}

	cout << cnt;

	return 0;
}