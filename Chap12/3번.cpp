#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin;
	fin.open("C:\\windows\\system.ini");
	if (!fin)
	{
		cout << "파일 읽기 실패" << endl;
		return 0;
	}
	char buf[81];
	while (true) {
		fin.getline(buf,81);
		if (fin.eof())
			break;
		for (int i = 0; buf!=0; i++)
			buf[i] = toupper(buf[i]);
		cout << buf << endl;
	}
	fin.close();
}