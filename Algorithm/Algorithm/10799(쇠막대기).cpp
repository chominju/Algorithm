#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	stack<char> st;
	string str;

	cin >> str;

	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '('&&str[i + 1] == ')')
		{
			sum += st.size();
			i++;
		}
		else
		{
			if (str[i] == ')')
			{
				st.pop();
				sum += 1;
			}
			else
				st.push(str[i]);
		}
	}
	
	cout << sum;

	return 0;
}