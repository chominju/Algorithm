#include <iostream>
#include <string>
#include <stack>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<char> st;
	stack<char> temp_st;
	string str;
	cin >> str;

	int str_len = str.length();
	for (int i = 0; i < str_len; i++)
		st.push_back(str[i]);

	int n;
	cin >> n;

	int index = 0;
	while (n)
	{
		char temp;
		cin >> temp;

		switch (temp)
		{
		case 'L':
		{
			if (index != st.size())
				index++;
			break;
		}
		case 'D':
		{
			if (index != 0)
				index--;
			break;
		}
		case 'B':
		{
			if (index != st.size())
			{
				for (int i = 0; i < index; i++)
				{
					temp_st.push(st.back());
					st.pop_back();
				}
				st.pop_back();
			int len = temp_st.size();
				for (int i = 0; i <len; i++)
				{
					st.push_back(temp_st.top());
					temp_st.pop();
				}
			}
			break;
		}

		case 'P':
		{
			for (int i = 0; i < index; i++)
			{
				temp_st.push(st.back());
				st.pop_back();
			}
			char ch;
			cin >> ch;
			st.push_back(ch);

			int len = temp_st.size();
			for (int i = 0; i < len; i++)
			{
				st.push_back(temp_st.top());
				temp_st.pop();
			}

			break;
		}

		default:
			break;
		}
		n--;
	}

	int len = st.size();
	for (int i = 0; i <len; i++)
	{
		printf("%c",st.front());
		st.pop_front();
	}

	return 0;
}