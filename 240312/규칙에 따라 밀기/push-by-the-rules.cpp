#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string com;
	cin >> str;
	cin >> com;

	int str_len = str.length();
	int com_len = com.length();

	for (int i{ 0 }; i < com_len; i++) {
		if (com[i] == 'L') {
			str = str.substr(1, str_len - 1)
				+ str.substr(0, 1);
		}
		else {
			str = str.substr(str_len - 1, 1)
				+ str.substr(0, str_len - 1);
		}
	}

	cout << str;
	
}