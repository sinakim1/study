#include <iostream>
using namespace std;

int main()
{
	int x;//�̿��ڰ� �����ϴ� �¼�
	int y;

	int a;//�¼� ����
	int b[4][10]{};
	cout << "�¼��� �����Ͻðڽ��ϱ�? (1�Ǵ� 0) " << endl;
	cin >> a;
	cout << "������ �¼��� ������ �����ϴ�." << endl;
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
			cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
			x = 0;
			y = 0;
			cin >> x >> y;
			cout << endl;

			if (b[x - 1][y - 1] == 0)
			{
				cout << "����Ǿ����ϴ�." << endl;
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
			else//������ �¼� �ٽ� �Է½�
				cout << "�̹� ����� �ڸ��Դϴ�." << endl;
		}

	}
	else if (a == 0)//0 �Է½�
	{
		cout << "�¼� ���� ����" << endl;
	}
	else//1�� 0�� �ƴ� ���� �Է½�
	{
		cout << "1�� �Ǵ� 0���� �Է��ϼ���." << endl;
	}

	return 0;
}