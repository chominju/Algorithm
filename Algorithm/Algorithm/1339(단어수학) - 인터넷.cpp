#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

vector<string> word;
int result = 0;
int alpha[26]; // 어떤 알파벳이 사용되었는지 확인한다.

void cal()
{
	for (int i = 0; i < word.size(); i++)
	{
		int pow = 1;
		for (int j = word[i].size() - 1; j >= 0; j--)
		{
			int val = word[i][j] - 'A';
			alpha[val] += pow;
			pow *= 10;
		}
	}

	sort(alpha, alpha + 26);
	int num = 9;
	for (int i = 25; i >= 0; i--)
	{
		if (alpha[i] == 0)
			break;
		result += (alpha[i] * num);
		num--;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	int sum = 0;


	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		word.push_back(str);
	}

	cal();
	cout << result;
	return 0;

}