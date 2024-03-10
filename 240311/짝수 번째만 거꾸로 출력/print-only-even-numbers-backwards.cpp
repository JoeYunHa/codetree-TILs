#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	string ans;
	for (int i{ 0 }; i < str.length(); i++) {
		if (i % 2 == 1)
			ans += str[i];
	}

	string::iterator it;

	for (it = ans.end() - 1; it != ans.begin(); it--)
		cout << *it;
	cout << *it;
}