#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();

	while (len != 1) {
		int idx;
		cin >> idx;
		if (idx >= len)
			idx = len - 1;
		str.erase(idx, 1);
		len--;
		cout << str << endl;
	}
	
}