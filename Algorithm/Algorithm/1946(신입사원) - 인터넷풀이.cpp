#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); //����ӵ� ���

	int t;
	cin >> t;


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

		sort(people.begin(), people.end());
		
		int result = 1; // 1���� �հ�
		int interviewRank = people[0].second; // 1���� ���ͺ�����

		for (int i = 1; i < temp; i++)
		{
			if (people[i].second < interviewRank)
			{
				result++;
				interviewRank = people[i].second;
			}
		}

		cout << result << "\n";

	}

	return 0;
}