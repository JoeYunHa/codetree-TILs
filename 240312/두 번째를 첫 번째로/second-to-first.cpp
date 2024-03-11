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

	for (auto& c : str) {
		if (c == second)
			c = first;
	}

	cout << str;
}