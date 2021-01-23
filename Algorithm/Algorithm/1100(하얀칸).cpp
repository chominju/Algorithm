#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> str;

		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					if (str[j] == 'F')
						count++;
			}
			else
				if (j % 2 == 1)
					if (str[j] == 'F')
						count++;
		}

	}
	cout << count;
	return 0;
}