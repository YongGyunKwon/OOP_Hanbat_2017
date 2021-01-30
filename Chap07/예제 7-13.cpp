#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	friend Power operator++(Power& op); // 전위++ 연산자함수프렌드선언
	friend Power operator++(Power& op, int x); // 후위++ 연산자함수프렌드선언
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator++(Power& op) { // 전위++ 연산자함수구현
	op.kick++;
	op.punch++;
	return op; // 연산결과리턴
}
Power operator++(Power& op, int x) { // 후위++ 연산자함수구현
	Power tmp = op; // 변경하기전의op 상태저장
	op.kick++;
	op.punch++;
	return tmp; // 변경이전의op 리턴
}
int main() {
	Power a(3, 5), b;
	b = ++a; // 전위++ 연산자
	a.show(); b.show();
	b = a++; // 후위++ 연산자
	a.show(); b.show();
}