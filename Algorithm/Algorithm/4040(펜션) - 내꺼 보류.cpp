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
	int n;				// n : 펜션에서 관리하는 여름 성수기 총 기간(1~100)
	int m;				// m : 펜션이 보유하고 있는 방의 개수(3~30)
	cin >> n >> m;

	vector<string> room;
	bool **checkRoom = new bool*[n];

	for (int i = 0; i < n; i++) // 방 입력받기
	{
		string str;
		cin >> str;
		room.push_back(str);
		checkRoom[i] = new bool[m];
		for (int j = 0; j < m; j++)
			checkRoom[i][j] = false;
	}



	int in, out;		// 들어오고 나가는날
	cin >> in >> out;



	roomCheck(room, in, out, 0);

	
	while (1) // 무한 반복
	{
		for (int i = in; i < out; i++) // 들어오고 나가는날까지
		{
			bool room_empty = false;
			for (int j = 0; j < m; j++) // 방 처음부터 끝까지
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