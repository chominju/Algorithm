#include <iostream>
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

	float *arr = new float[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n, comp);

	float max =arr[0];
	float sum = 0;
	float avg;
	for (int i = 0; i < n; i++)
	{
		sum += (float)arr[i] / max * 100.0;
	}
	avg = sum / (float)n;
	cout << avg;


	return 0;
}