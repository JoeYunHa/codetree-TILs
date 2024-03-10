#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char cmp;
	cin >> str >> cmp;

	int start_idx = str.find(cmp);

	if (start_idx != string::npos)
		cout << start_idx;
	else
		cout << "No";
}