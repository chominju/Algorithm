#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1000000000 

long long dist[100001];
long long price[100001];
long long n, sum;
long long greedy;

int main()
{
	cin >> n;

	for (int i = 1; i <= n - 1; i++)
		cin >> dist[i];
	
	for (int i = 1; i <= n; i++)
		cin >> price[i];

	greedy = MAX;

	for (int i = 1; i <= n - 1; i++)
	{
		if (price[i] < greedy)
			greedy = price[i];
		sum += greedy * dist[i];
	}

	cout << sum;
}