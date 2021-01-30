#include<iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) { this->a = a; this->b = b; this->c = c; this->d = d; }
	void operator >> (int n[]);
	void operator <<(int n[]);
	void show() { cout << "Matrix = {" << a << " " << b << " " << c << " " << d <<" }"<< endl; }
};
void Matrix::operator >> (int n[]) {
	n[0] = a; n[1] = b; n[2] = c; n[3] = d;
}
void Matrix::operator<<(int n[]) {
	a = n[0]; b = n[1]; c = n[2]; d = n[3];
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };

	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}