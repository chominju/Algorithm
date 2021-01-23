#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	string str1;
	string str2;
	string str3;
	string str4;
	string str5;
	
	cin >> str1;
	cin >> str2;
	cin >> str3;
	cin >> str4;
	cin >> str5;
	
	int i = 0;
	while (1)
	{
		bool check = true;
		if (i < str1.size())
		{
			cout << str1[i];
			check = false;
		}

		if (i < str2.size())
		{
			cout << str2[i];
			check = false;
		}
		if (i < str3.size())
		{
			cout << str3[i];
			check = false;
		}
		if (i < str4.size())
		{
			cout << str4[i];
			check = false;
		}
		if (i < str5.size())
		{
			cout << str5[i];
			check = false;
		}

		i++;
		if (check)
			break;
	}

	return 0;
}