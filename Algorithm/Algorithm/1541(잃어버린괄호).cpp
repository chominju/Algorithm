#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int sum = 0;

	int index = str.find('-');
	bool minus_check = true;
	if (index == -1)
	{
		index = str.size();
		minus_check = false;
	}

	string s;
	for (int i = 0; i < index; i++)
	{
		if (str[i] != '+') // +가 아닐떄
		{
			s += str[i];
			if (i == index - 1)
			{
				sum += stoi(s);
			}
		}
		else
		{
			sum += stoi(s);
			s.clear();
		}
	}

	s.clear();

	if (minus_check)
	{
		while (index != -1) // - 가 없을 때까지
		{
			bool out = true;
			for (int i = index + 1; i < str.size(); i++)
			{
				if ((str[i] == '-') || (str[i] == '+'))
				{
					sum = sum - stoi(s);
					s.clear();
					if (str[i] == '-')
					{
						index = i;
						out = false;
						break;
					}
				}
				else
				{
					s += str[i];
					if (i == str.size() - 1)
					{
						sum = sum - stoi(s);
					}
				}
			}

			if (out)
			{
				break;
			}

		}
	}
	cout << sum;

	return 0;
}