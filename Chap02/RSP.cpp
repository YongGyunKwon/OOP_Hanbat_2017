#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string a, b;
	cout << "���>>";
	cin >> a;

	cout << "�ƶ�>>";
	cin >> b;

	if (a == "����" && b == "��")
		cout << "��� ��";
	else if (a == "����"&&b == "�ָ�")
		cout << "�ƶ� ��";
	else if (a == "����"&& b == "����")
		cout << "���";
	else if (a == "����"&& b == "����")
		cout << "���";
	else if (a == "����"&& b == "��")
		cout << "�ƶ� ��";
	else if (a == "����"&& b == "����")
		cout << "��� ��";
	else if (a == "��"&& b == "��")
		cout << "���";
	else if (a == "��"&& b == "�ָ�")
		cout << "��� ��";
	else if (a == "��"&& b == "����")
		cout << "�ƶ� ��";
}