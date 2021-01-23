#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	A=65
	Z=90
	a=97
	z=122
	0=48
	9=57
	*/

	string str;
	getline(cin, str);

	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		unsigned char ch=str[i];
		if (str[i] >= 65 && str[i] <= 90)
		{
			ch = str[i] + 13;
			if (ch > 90)
				ch -= 26;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			ch = str[i] + 13;
			if (ch > 122)
				ch -= 26;
		}
			cout << ch;
	}

	return 0;
}