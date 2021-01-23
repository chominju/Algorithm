#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	vector<string> arr;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}

	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	vector<string> arr2;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == arr[i + 1])
		{
			arr2.push_back(arr[i]);
			i++;
		}
	}

	int len = arr2.size();
	cout << len << "\n";
	for (int i = 0; i < len; i++)
		cout << arr2[i] << "\n";
}