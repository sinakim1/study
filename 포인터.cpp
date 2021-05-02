#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; //포인터 선언하기
	ptr = &a; //포인터 초기화 하기

	cout << "변수 a의 주소는 :" << ptr << endl; //주소 출력
	cout << "a의 값은 : " << *ptr << endl; //a의 값 출력
	return 0;

}
