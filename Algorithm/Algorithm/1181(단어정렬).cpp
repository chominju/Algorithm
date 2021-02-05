#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main()
{
	vector<string> vec;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool check = true;
		string temp;
		cin >> temp;
		for (int j = 0; j < vec.size(); j++)
			if (vec[j] == temp)
				check = false;
		if (check)
			vec.push_back(temp);
	}

	sort(vec.begin(), vec.end(), comp);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << "\n";



	return 0;
}