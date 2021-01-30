﻿#include<iostream>
#include<cstring>
using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(char *title, int price);
	~Book() { if (title) delete[]title; }
	Book(Book &b);
	void set(char *title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
Book:: Book(char *title, int price)
{
	int len=strlen(title);
	this->title = new char[len+1];
	strcpy(this->title, title);
	this->price = price;
}
void Book::set(char *title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}
Book:: Book(Book &b) {
	int len = strlen(b.title);
	this->title = new char[len + 1];
	strcpy(this->title, b.title);
	this->price = b.price;
}
int main() {
	Book cpp("명품 c++", 10000);
	Book java = cpp;

	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}