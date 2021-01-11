#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(float a, float b)
{
	return a > b;
}
int main()
{
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int n;
		vector <float> arr;

		cin >> n;

		for (int j = 0; j < n; j++)
		{
			float temp;
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end(), comp);

		float sum = 0;
		float avg = 0;
		for (int j = 0; j < n; j++)
		{
			sum += arr[j];
		}
		avg = sum / (float)n;

		float per = 100.0f;
		for (int j = 0; j < n; j++)
		{
			if (avg >= arr[j])
			{
				per = (float)j / n*100.0f;
				break;
			}
		}

		cout << fixed;
		cout.precision(3);

		cout << per<<"%\n";

	}


	return 0;
}