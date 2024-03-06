#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	bool first, second, third;

	first = (a > b ? true : false);
	second = (a > c ? true : false);
	
	if (first != second) {
		cout << a << endl;
		return 0;
	}

	third = (b > c ? true : false);

	if (first == third)
		cout << b << endl;
	else
		cout << c << endl;

	return 0;

}