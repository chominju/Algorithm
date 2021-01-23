#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string str1;
	string str2;
	
	cin >> str1;
	cin >> str2;

	int index = 0;
	int max = 0;
	while (index!=str1.length())
	{
		int j_index = 0;
		stack<int> temp;
		for (int i = index; i < str1.length(); i++)
		{
			for (int j = j_index; j < str2.length(); j++)
			{
				if (str1[i] == str2[j])
				{
					temp.push(str2[j]);
					j_index = j + 1;
					break;
				}
			}
		}
		if (max < temp.size())
			max = temp.size();
		index++;
	}

	cout << max;

	return 0;
}