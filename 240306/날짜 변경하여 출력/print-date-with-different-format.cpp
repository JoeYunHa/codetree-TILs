#include<iostream>
using namespace std;

int main() {
	int y;
	int m;
	int d;
	char deli;

	cin >> y;
	cin.get();
	cin >> m;
	cin.get();
	cin >> d;

	cout << m << "-" << d << "-" << y;

	return 0;
}