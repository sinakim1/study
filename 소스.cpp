#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "����� �̸��� �����Դϱ�? ";
	string name;
	getline(cin, name);//�̸� �Է�
	cout << "�ݰ����ϴ�." << name << "��" << endl;

	cout << "apple�� ������ ���Դϱ�?";
	int apple; //���� ����
	cin >> apple;

	cout << "banana�� ������ ���Դϱ�?";
	int banana;
	cin >> banana;

	cout << "orange�� ������ ���Դϱ�?";
	int orange;
	cin >> orange;

	cout << "apple�� �� �� �ֽ��ϱ�?";
	int apples;
	cin >> apples;

	cout << "banana�� �� �� �ֽ��ϱ�?";
	int bananas;
	cin >> bananas;

	cout << "orange�� �� �� �ֽ��ϱ�?";
	int oranges;
	cin >> oranges;

	int sum = (apple*apples) + (banana*bananas) + (orange*oranges) - 500; //�ݾ��� �տ� 500�� ����
	cout << "��" << sum << "�� �Դϴ�.";

	return 0;
}