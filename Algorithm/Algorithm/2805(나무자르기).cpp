#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long n, m;
vector<long long> ve;

bool possible(long long len)
{
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = ve[i] - len;
		if (temp <= 0)
			temp = 0;
			
		cnt += temp;
	}

	//조건 충족 여부

	if (cnt >= m)
		return true;
	return false;
}


int main()
{
	cin >> n >> m;

	long long high = 0;

	for (int i = 0; i < n; i++)
	{
		long long temp;
		cin >> temp;
		ve.push_back(temp);
		high = max(high, temp);
	}

	long long result = 0;
	long long low = 1;

	//이분 탐색 진행
	while (low <= high)
	{
		long long mid = (low + high) / 2;
		if (possible(mid))
		{
			if (result < mid)
				result = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	cout << result << "\n";
	return 0;


	return 0;
}