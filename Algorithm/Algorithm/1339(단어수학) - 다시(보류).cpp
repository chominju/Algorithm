#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int maxnum = 9;
int n;
int in = -1;
using namespace std;

pair<char, int> num;

void setNum(char c)
{
	num.first = c;
	num.second = maxnum;
	maxnum--;

	if (n == 1)
	{
		
	}


}


bool comp(string a, string b)
{
	return a.length() > b.length();
}

int main()
{
	cin >> n;
	int sum = 0;

	vector<string> word;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		word.push_back(str);
	}

	sort(word.begin(), word.end(),comp);
	
	int maxlen = word[0].length();
	
	setNum(word[0][0]);

	int index = 0;
	
	
}