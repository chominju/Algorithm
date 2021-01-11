#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	int *arr_input = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
		int temp;
		cin >> temp;
		arr_input[i] = temp;
	}

	int i = -1;
	int begin;
	int end;
	while (1)
	{
		i++;
		if (begin == NULL) // 시작점이 안정해졌음
		{
			if (abs(arr_input[i] - arr_input[i + 1]) == 1) // 절대값이 + - 1 // 정상
			{

			}
			else
			{
				if()
			}
		}
		
	}

	return 0;
}