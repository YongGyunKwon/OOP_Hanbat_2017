#include<iostream>
using namespace std;

int main() {
	double a,b,c,d,e;
	double max = 0;

	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b>>c>>d>>e;
	if (a > max)
		max=a;
	if (b > max)
		max=b; 
	if (c > max)
		max=c;
	if (d > max)
		max=d; 
	if (e > max)
		max=e;
		
		
		cout << "���� ū �� = " << max;
}