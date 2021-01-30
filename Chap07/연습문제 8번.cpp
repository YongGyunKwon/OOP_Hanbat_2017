#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=0) { this->radius = radius; }
	friend Circle operator+(int n, Circle op);
	void show() { cout << "radius =" << radius << " 인 원" << endl; }
};
Circle operator+(int n,Circle op){
	Circle tmp;
	tmp.radius = n +op.radius;
	return tmp;
	
}
int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}