#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	 
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;

		vector<int>::iterator it = find(arr.begin(), arr.end(), temp);

		if (it != arr.end())
			cout << "1" << " ";
		else
			cout << "0" << " ";
	}

	return 0;
}