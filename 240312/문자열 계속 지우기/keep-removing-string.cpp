#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string cmp;
	cin >> str;
	cin >> cmp;

	int cmp_len = cmp.length();
	int find = str.find(cmp);

	while (find != string::npos) {
		str.erase(find, cmp_len);
		find = str.find(cmp);
	}
	cout << str;

}