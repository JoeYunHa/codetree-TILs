#include<iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	if (a % 2 == 1) {
		a += 3;
		if (a % 3 == 0) {
			cout << a / 3 << endl;
			return 0;
		}
		else {
			cout << a << endl;
			return 0;
		}
	}
	else {
		if (a % 3 == 0) {
			cout << a / 3 << endl;
			return 0;
		}
		else {
			cout << a << endl;
			return 0;
		}
	}
	return 0;
}