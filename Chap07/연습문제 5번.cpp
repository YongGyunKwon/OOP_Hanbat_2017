#include<iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) {
		this->a = a; this->b = b; this->c = c; this->d = d;
	}
	void show() { cout << "Matrix = {" << a << " " << b << " " << c << " " << d << " }"<<endl; }

	Matrix operator+ (Matrix op);
	Matrix operator+=(Matrix op2);
	bool operator==(Matrix op);
};

Matrix Matrix::operator+=(Matrix op){
	a+=op.a; b+=op.b; c+=op.c; d+=op.d;
	return *this;
}
Matrix Matrix::operator+(Matrix op) {
	Matrix tmp;
	tmp.a=a+op.a; tmp.b=b+op.b; tmp.c=c+op.c; tmp.d=d+op.d;
	return tmp;
}
bool Matrix::operator==(Matrix op) {
	if (a == op.a &&b == op.b &&c == op.c&&d == op.d) return true;
	else return false;
}
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}