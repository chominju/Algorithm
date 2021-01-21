#include <iostream>
#include <string>
using namespace std;

int main()
{

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int ch[80] = { 0, };
		string str;
		cin >> str;
		int sum = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				if (j != 0)
				{
					if (str[j - 1] == 'O')
						ch[j] = ch[j - 1] + 1;
					else
						ch[j]++;
				}
				else
					ch[j]++;
			}
		}

		for (int j = 0; j < str.length(); j++)
			sum += ch[j];
		cout << sum << "\n";
	}

	



	return 0;
}