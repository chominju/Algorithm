#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int i = 0;
	int len = str.length();
	int check = 1;
	while (i != len/2)
	{
		if (str[i] != str[len - 1 - i])
		{
			check = 0;
			break;
		}
		i++;
	}

	cout << check;

	return 0;
}