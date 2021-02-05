#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	cin >> k >> n;

	vector<int> ve(k);

	for (int i = 0; i < k; i++)
		cin >> ve[i];

	sort(ve.begin(), ve.end());

	int begin = 0;
	int end = ve[0];
	int mid;

	bool check = false;
	int plus = 1;
	while (1)
	{
		long long count = 0;

		if (check == false)
		{
			mid = (begin + end) / 2;

			for (int i = 0; i < k; i++)
			{
				count += (ve[i] / mid);
			}

			if (count == n)
			{
				check = true;
			}
			else if (count < n)
			{
				end = mid - 1;
			}
			else
			{
				begin = mid + 1;
			}
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				count += (ve[i] / (mid+plus));
			}

			if (count == n)
			{
				plus++;
			}
			else
			{
				cout << mid + (plus - 1);
				break;
			}
		}



	}


	return 0;
}