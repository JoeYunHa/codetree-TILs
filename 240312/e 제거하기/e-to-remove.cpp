#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char target = 'e';
	cin >> str;

	int find = str.find(target);
	str.erase(find, 1);

	cout << str;
}