#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;



int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

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

	int len = ve.size();

	int begin = 0;
	int end = ve.size() - 1;
	int value = qu.front();
	bool reset = false;

	while (!qu.empty())
	{
		if (end < 0 || begin >= len)
		{
			cout << "0" << "\n";
			reset = true;
			qu.pop();
		}

		if (reset)
		{
			begin = 0;
			end = ve.size() - 1;
			value = qu.front();
			reset = false;
		}

		int mid_index = (begin + end) / 2;
		if (value < ve[mid_index])
			end = mid_index - 1;
		else if (value > ve[mid_index])
			begin = mid_index + 1;
		else
		{
			cout << "1" << "\n";
			reset = true;
			qu.pop();
		}
	}

	return 0;
}