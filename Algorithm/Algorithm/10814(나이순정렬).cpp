#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(pair<pair<int, string>, int > a, pair<pair<int, string>, int > b)
{
	if (a.first.first == b.first.first)
		return a.second < b.second;
	else
		return a.first.first < b.first.first;
}

int main()
{
	int n;
	cin >> n;
	
	vector<pair<pair<int, string>,int>> people;


	for (int i = 0; i < n; i++)
	{
		pair<pair<int, string>, int > temp;

		cin >> temp.first.first >> temp.first.second;
		temp.second = i;
		people.push_back(temp);
	}

	sort(people.begin(), people.end(), comp);

	for (int i = 0; i < n; i++)
		cout << people[i].first.first << " " << people[i].first.second << "\n";


	return 0;
}