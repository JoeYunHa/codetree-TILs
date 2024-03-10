#include<iostream>
#include<string>
using namespace std;

int main() {
	string str1;
	string str2;

	getline(cin, str1);
	getline(cin, str2);

	string str;

	for (int i{ 0 }; i < str1.length(); i++) {
		if (str1[i] != ' ')
			str.push_back(str1[i]);
	}

	for (int j{ 0 }; j < str2.length(); j++) {
		if (str2[j] != ' ')
			str.push_back(str2[j]);
	}

	cout << str;

	return 0;

}