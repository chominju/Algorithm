#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int count = 0;
	for (int i = 0; i < str.length();)
	{
		int temp = 1;
		if (str[i] == 'c')
		{
			if (str[i + 1] == '='|| str[i + 1] == '-')
			{
				temp = 2;
			}
	
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == 'z')
			{
				if (str[i + 2] == '=')
					temp = 3;
			}
			else if(str[i+1]=='-')
			{
				temp = 2;
			}
		}
		else if (str[i] == 'l'||str[i]=='n')
		{
			if (str[i + 1] == 'j')
				temp = 2;
		}
		else if (str[i] == 's'||str[i]=='z')
		{
			if (str[i + 1] == '=')
				temp = 2;
		}

		i += temp;
		count++;
	}

	cout << count;

	return 0;
}