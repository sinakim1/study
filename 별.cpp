#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int a = 1; a <= n * 2; a++)//전체행
	{
		for (int b = 1; b <= n; b++)//전체열
		{
			if (a % 2 == 0)//짝수행
			{
				if (b % 2 == 0)
					cout << "*";
				else cout << " ";
			}
			else//홀수행
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