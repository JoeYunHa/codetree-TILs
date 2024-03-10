#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	string b;
	cin >> a;
	cin >> b;

	string a_app = a + b;
	string b_app = b + a;

	if (a_app == b_app)
		cout << "true";
	else
		cout << "false";
}