#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	cout << str[0];
	int index = 0;
	while (1)
	{
		index = str.find('-',index);
		if (index != -1)
		{
			cout << str[index + 1];
			index++;
		}
		else
			break;
	}
	return 0;
}