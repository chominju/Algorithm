#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		bool check[26] = { 0, };
		cin >> str;
		int len = str.length();
		bool count = true;
		for (int j = 0; j < len; j++)
		{
			if (check[str[j] - 'a'] == false)
				check[str[j] - 'a'] = true;
			else
				if (str[j] != str[j - 1])
					count = false;
		}

		if (count)
			num++;
	}

	cout << num;


	return 0;
}