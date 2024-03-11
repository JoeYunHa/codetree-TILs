#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	while (str.length() != 1) {
		int idx{ 0 };
		cin >> idx;
		if (idx >= str.length()) 
			str.erase(str.length() - 1, 1);
		else 
			str.erase(idx, 1);
		cout << str << endl;
	}
	
}