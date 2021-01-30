#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(0));
	int n = rand();

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
	string s;
	getline(cin, s, '\n');

	if (s == "exit") 
		return 0;

	



}