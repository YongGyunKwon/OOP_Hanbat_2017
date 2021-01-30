#include<iostream>
using namespace std;

int main() {
	int n, m;

	for (n = 1; n <= 9; n++) {
		for (m = 1; m <= 9; m++)
			cout << m << "x" << n << "=" << n*m << " ";
		cout << endl;
	}
}