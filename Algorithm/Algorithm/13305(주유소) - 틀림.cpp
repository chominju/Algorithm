#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> dis;
	vector <int> price; 


	for (int i = 0; i < n - 1; i++) // 거리값
	{
		int temp;
		cin >> temp;
		dis.push_back(temp);
	}

	for (int i = 0; i < n; i++)	// 주유소 값
	{
		int temp;
		cin >> temp;
		price.push_back(temp);
	}

	long long sum = 0;
	int i, j;
	for (i = 0; i < n -1; i++)
	{
		int temp_dis = dis[i];
		for (j = i+1; j < n-1; j++)
		{
			if (price[i] >= price[j])
			{
				break;
			}
			else
			{
				temp_dis += dis[j];
			}
		}
		sum += price[i] * temp_dis;
		if (j == n - 1)
			break;
		
	}

	cout << sum;

	return 0;
}