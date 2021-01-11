#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); //실행속도 향상

	int t;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		pair<int, int> score;
		vector<pair<int, int>> people;

		int temp;
		cin >> temp;								// 받는 인원 수
		for (int j = 0; j < temp; j++)
		{
			cin >> score.first >> score.second;		// 점수 넣기
			people.push_back(score);
		}

		sort(people.begin(), people.end());
		
		int result = 1; // 1번은 합격
		int interviewRank = people[0].second; // 1번의 인터뷰점수

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