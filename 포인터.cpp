#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; //������ �����ϱ�
	ptr = &a; //������ �ʱ�ȭ �ϱ�

	cout << "���� a�� �ּҴ� :" << ptr << endl; //�ּ� ���
	cout << "a�� ����: " << a << endl; //a�� �� ���
	return 0;

}