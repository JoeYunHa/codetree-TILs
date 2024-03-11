#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int q;
	cin >> str >> q;

	int len = str.length();

	for (int i{ 0 }; i < q; i++) {
		int req;
		cin >> req;
		if (req == 1) { // left-shift
			str = str.substr(1, len-1)
				+ str.substr(0, 1);
		}
		else if (req == 2) { // right-shift
			str = str.substr(len - 1, 1) 
				+ str.substr(0, len - 1);
		}
		else if (req == 3) {
			for (int i{ 0 }; i < len / 2; i++) {
				char tmp = str[i];
				str[i] = str[len - 1 - i];
				str[len - 1 - i] = tmp;
			}
		}
		cout << str << endl;
	}
}