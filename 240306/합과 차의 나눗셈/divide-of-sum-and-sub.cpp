#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double a;
	double b;

	cin >> a >> b;

	

	cout << fixed << setprecision(2) << (a + b) / (a - b);

	return 0;
}