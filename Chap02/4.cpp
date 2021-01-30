#include<iostream>
using namespace std;

int main() {
	double a,b,c,d,e;
	double max = 0;

	cout << "5 개의 실수를 입력하라>>";
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
		
		
		cout << "제일 큰 수 = " << max;
}