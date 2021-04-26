#include <iostream>
using namespace std;

int main()
{
	int x;//이용자가 선택하는 좌석
	int y;

	int a;//좌석 선택
	int b[4][10]{};
	cout << "좌석을 예약하시겠습니까? (1또는 0) " << endl;
	cin >> a;
	cout << "현재의 좌석은 다음과 같습니다." << endl;
	cout << "---------------------------------" << endl;
	cout << "1 2 3 4 5 6 7 8 9 10" << endl;
	cout << "0 0 0 0 0 0 0 0 0 0 " << endl;
	cout << "0 0 0 0 0 0 0 0 0 0 " << endl;
	cout << "0 0 0 0 0 0 0 0 0 0 " << endl;
	cout << " " << endl;

	if (a == 1)
	{
		while (a == 1)
		{
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
			x = 0;
			y = 0;
			cin >> x >> y;
			cout << endl;

			if (b[x - 1][y - 1] == 0)
			{
				cout << "예약되었습니다." << endl;
				cout << "---------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "---------------------------------------" << endl;

				b[x - 1][y - 1] = 1;
				for (int i = 0; i < 3; i++)
				{
					for (int k = 0; k < 10; k++)
					{
						cout << b[i][k] << " ";
					}
					cout << endl;
				}
			}
			else//예약한 좌석 다시 입력시
				cout << "이미 예약된 자리입니다." << endl;
		}

	}
	else if (a == 0)//0 입력시
	{
		cout << "좌석 예약 종료" << endl;
	}
	else//1과 0이 아닌 숫자 입력시
	{
		cout << "1번 또는 0번만 입력하세요." << endl;
	}

	return 0;
}