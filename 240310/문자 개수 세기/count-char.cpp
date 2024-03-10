#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char cmp;

	getline(cin, str);
	cin >> cmp;

	int count{ 0 };

	for (int i{ 0 }; i < str.length(); i++) {
		if (str[i] == cmp)
			count++;
	}

	cout << count;

	return 0;

}