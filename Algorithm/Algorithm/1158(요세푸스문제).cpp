#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> qu;
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		qu.push(i + 1);

	cout << "<";
	while (!qu.empty())
	{
		for (int i = 1; i < k; i++)
		{
			qu.push(qu.front());
			qu.pop();
		}

		cout << qu.front();
		qu.pop();

		if (!qu.empty())
			cout << ", ";

	}

	cout << ">";

	return 0;
}