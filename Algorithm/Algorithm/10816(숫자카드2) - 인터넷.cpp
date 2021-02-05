#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int value;

	cin >> n;
	vector<int> ve(n);

	for (int i = 0; i < n; i++)
		cin >> ve[i];

	sort(ve.begin(), ve.end());
	cin >> m;

	vector<int> answer(m);
	for (int i = 0; i < m; i++) 
	{
		cin >> value;
		auto upper = upper_bound(ve.begin(), ve.end(), value);
		auto lower = lower_bound(ve.begin(), ve.end(), value);

		answer[i] = upper - lower;
	}

	for (int i=0; i<answer.size(); i++)
		cout << answer[i] << " ";

	return 0;
}

