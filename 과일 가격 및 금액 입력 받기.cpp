#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "당신의 이름은 무엇입니까? ";
	string name;
	getline(cin, name);//이름 입력
	cout << "반갑습니다." << name << "님" << endl;

	cout << "apple의 가격은 얼마입니까?";
	int apple; //변수 선언
	cin >> apple;

	cout << "banana의 가격은 얼마입니까?";
	int banana;
	cin >> banana;

	cout << "orange의 가격은 얼마입니까?";
	int orange;
	cin >> orange;

	cout << "apple은 몇 개 있습니까?";
	int apples;
	cin >> apples;

	cout << "banana는 몇 개 있습니까?";
	int bananas;
	cin >> bananas;

	cout << "orange는 몇 개 있습니까?";
	int oranges;
	cin >> oranges;

	int sum = (apple*apples) + (banana*bananas) + (orange*oranges) - 500; //금액의 합에 500원 할인
	cout << "총" << sum << "원 입니다.";

	return 0;
}
