#include <iostream>

using namespace std;

int main()
{
	int pasta[3];
	int pasta_min = 2000;
	int juice[2];
	int juice_min = 2000;

	for (int i = 0; i < 3; i++)
	{
		cin >> pasta[i];
		if (pasta[i] < pasta_min)
			pasta_min = pasta[i];
	}

	for (int i = 0; i < 2; i++)
	{
		cin >> juice[i];
		if (juice[i] < juice_min)
			juice_min = juice[i];

	}

	float avg = (float)(pasta_min + juice_min)*1.1;

	cout << fixed;
	cout.precision(1);
	cout << avg;
	return 0;
}