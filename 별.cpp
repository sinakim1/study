#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int a = 1; a <= n * 2; a++)//��ü��
	{
		for (int b = 1; b <= n; b++)//��ü��
		{
			if (a % 2 == 0)//¦����
			{
				if (b % 2 == 0)
					cout << "*";
				else cout << " ";
			}
			else//Ȧ����
			{
				if (b % 2 == 0)
					cout << " ";
				else cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}