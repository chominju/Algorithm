#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int n;
	cin >> n;

	vector<int> a;
	vector<int> b;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		b.push_back(temp);
	}

	sort(a.begin(), a.end()); // 작은순서로
	sort(b.begin(), b.end(),comp); // 큰순서로

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}

	cout << sum;


	return 0;
}