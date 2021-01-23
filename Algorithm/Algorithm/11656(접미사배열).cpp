#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	queue<char> qu;
	vector<string> ve;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
		qu.push(str[i]);

	while (qu.size())
	{
		int len = qu.size();
		queue<char>temp_qu = qu;
		string temp;
		for (int i = 0; i < len; i++)
		{
			temp += temp_qu.front();
			temp_qu.pop();
		}
		ve.push_back(temp);
		qu.pop();
	}

	sort(ve.begin(), ve.end());

	for (int i = 0; i < ve.size(); i++)
		cout << ve[i] << "\n";
	

	return 0;
}