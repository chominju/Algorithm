#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool comp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
	if (a.second == b.second)
	{
		return a.first.first < b.first.first;
	}
	else
	{
		return a.second < b.second;
	}


	//if ((a.second - a.first) < (b.second - b.first)) // 앞 < 뒤
	//{
	//	return a.first < b.first;
	//}
	//else if ((a.second - a.first) > (b.second - b.first)) // 앞 > 뒤
	//{
	//	return a > b;
	//}
	//else if((a.second - a.first) == (b.second - b.first))
	//{
	//	return a.first < b.first;
	//}
}

int main()
{
	int n;
	cin >> n;

	pair<pair<int, int>,int> time;
	vector <pair<pair<int, int>, int>> meet;

	int temp=0;

	for (int i = 0; i < n; i++)
	{
		cin >> time.first.first >> time.first.second;
		time.second = time.first.second - time.first.first;
		meet.push_back(time);
		if (temp < time.first.second)
			temp = time.first.second;
	}

	bool *check = new bool[temp+1];
	memset(check, 0, sizeof(bool)*(temp+1));

	sort(meet.begin(), meet.end(),comp);

	cout << endl << endl;
	int count = 0;

	

	for (int i = 0; i < n; i++)
	{
		bool notsc = true;
		for (int j = meet[i].first.first; j <= meet[i].first.second; j++)
		{
			if (check[j])
			{
				if (meet[i-1].first.second!= meet[i].first.first)
				{
					notsc = false;
					break;
				}
			}
		}

		if (notsc)
		{
			for (int j = meet[i].first.first; j < meet[i].first.second; j++)
			{
				check[j] = true;
			}
				count++;
		}

		//cout << meet[i].first.first << "  " << meet[i].first.second << endl;
	}

	cout << count;
	


	return 0;
}