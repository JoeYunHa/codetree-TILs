#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char first;
	char second;
	cin >> str;

	first = str[0];
	second = str[1];

	for (int i{ 0 }; i < str.length(); i++) {
		if (str[i] == first)
			str[i] = second;
		else if (str[i] == second)
			str[i] = first;
	}

	cout << str;
}