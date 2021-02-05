#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;



int main()
{
	vector <int> ve;
	queue<int> qu;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ve.push_back(temp);
	}

	sort(ve.begin(), ve.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		qu.push(temp);
	}

	while (!qu.empty())
	{
		bool check = false;
		int front = qu.front();
		qu.pop();

		int len = ve.size();
		for (int i = 0; i < len; i++)
			if (front == ve[i])
				check = true;

		if (check)
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}

	return 0;
}