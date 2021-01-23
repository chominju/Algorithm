#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<int> ve;

	int check = false;
	int sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '0')
			check = true;
		ve.push_back(str[i]-'0');
		sum += str[i] - '0';
	}

	if (check&&sum%3==0)
	{
		sort(ve.begin(), ve.end());
		for (int i = ve.size() - 1; i >= 0; i--)
			cout << ve[i];
	}
	else
		cout << -1;
	return 0;
}