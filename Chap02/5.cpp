#include<iostream>
using namespace std;
int main()
{
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	
	char a[100];
	cin.getline(a, 100, '\n');

	int count=0;
	for (int i = 0; i < 100; i++)
		if (a[i] == 'x')
			count++;
	cout << "x�� ������ "<<count;
}