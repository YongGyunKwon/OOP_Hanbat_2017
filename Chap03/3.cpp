#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
public:
	int i;
	Random();
	int next();
	int nextInRange(int a,int b);
};
Random::Random() {
	srand((unsigned)time(0));
	i = rand();

}
int Random::next() {
	return i;
}
int Random::nextInRange(int a,int b){
	return i;
}

int main() {
	Random r;
	cout << "--0����" << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "2���� 4������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
}
