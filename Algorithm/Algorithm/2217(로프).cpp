#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int n;
	cin >> n;

	vector <int> rope;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		rope.push_back(temp);
	}

	sort(rope.begin(), rope.end(), comp);

	int weight = rope[0];

	for (int i = 1; i < n; i++)
	{
		if (weight < rope[i] * (i + 1))
		{
			weight = rope[i] * (i + 1);
		}
	}
	
	cout << weight;

	return 0;
}