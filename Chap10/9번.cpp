#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>v;
	
	int n;
	int i,j = 0;
	double sum = 0;
	while (1) {
		cout << "평균을 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n == 0)
			break;
		else
			v.push_back(n);
		sum += v.at(j);
		for (i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		cout << "평균= " << sum/v.size()<<endl;
		j++;
	}
}