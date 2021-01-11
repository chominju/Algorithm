#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		int len = str.length();
		//int temp = len;

		for (int j = 0; j < len; j++)
		{
			//int num10 = pow(10, temp - 1);
			switch (str[j])
			{
			case 'A':
			{
				str[j] = '9';
				//sum += 9 * num10;
				break;
			}

			case 'B':
			{
				str[j] = '8';
				//sum += 8 * num10;
				break;
			}

			case 'C':
			{
				str[j] = '7';
				//sum += 7 * num10;
				break;
			}

			case 'D':
			{
				str[j] = '6';
				//sum += 6 * num10;
				break;
			}

			case 'E':
			{
				str[j] = '5';
				//sum += 5 * num10;
				break;
			}

			case 'F':
			{
				str[j] = '4';
				//sum += 4 * num10;
				break;
			}

			case 'G':
			{
				str[j] = '3';
				//sum += 3 * num10;
				break;
			}

			case 'H':
			{
				str[j] = '2';
				//sum += 2 * num10;
				break;
			}

			case 'I':
			{
				str[j] = '1';
				//sum += 1 * num10;
				break;
			}

			case 'J':
			{
				str[j] = '0';
				//sum += 0 * num10;
				break;
			}

			default:
				break;
			}

			//temp--;
		}
		sum += stoi(str);
	}

		cout << sum;

	return 0;
}