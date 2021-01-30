#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string a, b;
	cout << "»ç¶Ç>>";
	cin >> a;

	cout << "¾Æ¶û>>";
	cin >> b;

	if (a == "°¡À§" && b == "º¸")
		cout << "»ç¶Ç ½Â";
	else if (a == "°¡À§"&&b == "ÁÖ¸Ô")
		cout << "¾Æ¶û ½Â";
	else if (a == "°¡À§"&& b == "°¡À§")
		cout << "ºñ±è";
	else if (a == "¹ÙÀ§"&& b == "¹ÙÀ§")
		cout << "ºñ±è";
	else if (a == "¹ÙÀ§"&& b == "º¸")
		cout << "¾Æ¶û ½Â";
	else if (a == "¹ÙÀ§"&& b == "°¡À§")
		cout << "»ç¶Ç ½Â";
	else if (a == "º¸"&& b == "º¸")
		cout << "ºñ±è";
	else if (a == "º¸"&& b == "ÁÖ¸Ô")
		cout << "»ç¶Ç ½Â";
	else if (a == "º¸"&& b == "°¡À§")
		cout << "¾Æ¶û ½Â";
}