#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	queue<int> qu;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		int temp;

		if (str == "push")
		{
			cin >> temp;
			qu.push(temp);
		}
		else if (str == "pop")
		{
			if (qu.empty())
				cout << "-1" << "\n";
			else
			{
				temp = qu.front();
				cout << temp << "\n";
				qu.pop();
			}
		}
		else if (str == "size")
		{
			cout << qu.size() << "\n";
		}
		else if (str == "empty")
		{
			if (qu.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (str == "front")
		{
			if (qu.empty())
				cout << "-1" << "\n";
			else
				cout << qu.front() << "\n";
		}
		else if (str == "back")
		{
			if (qu.empty())
				cout << "-1" << "\n";
			else
				cout << qu.back() << "\n";
		}
	}


	return 0;
}