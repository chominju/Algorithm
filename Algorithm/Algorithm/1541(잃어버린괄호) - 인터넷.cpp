#include <iostream>
#include <string>
using namespace std;

string s;

int result()
{
	int sum = 0;
	string temp;
	bool minus = false;
	for (int i = 0; i <= s.size(); i++)
	{
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0')
		{
			if (minus)
				sum -= stoi(temp);
			else
				sum += stoi(temp);

			if (s[i] == '-')
				minus = true;

			temp.clear();
			continue;
		}
		temp += s[i];
	}

	return sum;

}


int main()
{
	cin >> s;

	int re=result();

	cout << re;

	return 0;
}
