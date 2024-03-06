#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	char c;
	double a;
	double b;

	cin >> c;
	cin >> a;
	cin >> b;

	cout << c << endl;
	cout << fixed << setprecision(2) << a << endl;
	cout << b << endl;

	return 0;
}