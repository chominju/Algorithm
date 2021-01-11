#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;

	ios_base::sync_with_stdio(0);
	cin.tie(0); //����ӵ� ���

	for (int i = 0; i < t; i++)
	{
		pair<int, int> score;
		vector<pair<int, int>> people;

		int temp;
		cin >> temp;								// �޴� �ο� ��
		for (int j = 0; j < temp; j++)
		{
			cin >> score.first >> score.second;		// ���� �ֱ�
			people.push_back(score);
		}

		bool *check = new bool[temp];
		memset(check, 1, sizeof(check));

		sort(people.begin(), people.end());

		int m = 0, n = 1;
		while (m != temp - 1)
		{
			if (people[m].first < people[n].first && people[m].second < people[n].second)
				check[n] = false;
			n++;
			if ((n == temp - 1) || (n == temp))
			{
				m++;
				n = m + 1;
			}
		}
		int count = 0;
		for (int n = 0; n < temp; n++)
			if (check[n])
				count++;
		delete[]check;
		cout << count << "\n";



	}

	return 0;
}