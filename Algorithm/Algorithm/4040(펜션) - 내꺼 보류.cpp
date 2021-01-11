#include <iostream>
#include <string>
#include <vector>

using namespace std;

int roomCheck(vector<string> room, int in, int out, int selectRoom,int roomchange)
{
	int count = 0;
	int roomchange = 0;
	int returnNum = INT_MAX;
	for (int i = in; i < out; i++)
	{
		for (int j = 0; j < room[i].size(); j++)
		{
			if (room[i][j] == 'O')
			{
				returnNum=roomCheck(room, in + 1, out, j,roomchange);
			}
			else
				count++;

			if (count == room[i].size())
				return -1;

			if (returnNum == -1)
				break;
		}

		if (returnNum == -1)
			break;
	}
	return returnNum;
}

int main()
{
	int n;				// n : ��ǿ��� �����ϴ� ���� ������ �� �Ⱓ(1~100)
	int m;				// m : ����� �����ϰ� �ִ� ���� ����(3~30)
	cin >> n >> m;

	vector<string> room;
	bool **checkRoom = new bool*[n];

	for (int i = 0; i < n; i++) // �� �Է¹ޱ�
	{
		string str;
		cin >> str;
		room.push_back(str);
		checkRoom[i] = new bool[m];
		for (int j = 0; j < m; j++)
			checkRoom[i][j] = false;
	}



	int in, out;		// ������ �����³�
	cin >> in >> out;



	roomCheck(room, in, out, 0);

	
	while (1) // ���� �ݺ�
	{
		for (int i = in; i < out; i++) // ������ �����³�����
		{
			bool room_empty = false;
			for (int j = 0; j < m; j++) // �� ó������ ������
			{
				if (room[i][j] == 'O')
				{
					room_empty = true;
				}
			}
		}
	}

	return 0;
}