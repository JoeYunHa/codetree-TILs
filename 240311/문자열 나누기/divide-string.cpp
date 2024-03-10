#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;

	for (int i{ 0 }; i < n; i++) {
		string tmp = "";
		cin >> tmp;
		str.append(tmp);
	}
	
	for (int i{ 0 }; i < str.length(); i++) {
		cout << str[i];
		if (i % 5 == 4)
			cout << "\n";
	}
}