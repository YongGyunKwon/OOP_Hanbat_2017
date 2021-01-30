﻿#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator== (Book &b,int n);
	friend bool operator==(Book &b, string n);
	friend bool operator==(Book &a, Book &b);
};
bool operator==(Book &b, int n) {
	
	if (b.price == n) return true;
	else return false;
}
bool operator==(Book &b, string n) {
	
	if(b.title == n) return true;
	else return false;
}
bool operator==(Book &a, Book &b) {
	
	if (a.title == b.title &&a.price == b.price &&a.pages == b.pages) return true;
	else false;
}
int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}
