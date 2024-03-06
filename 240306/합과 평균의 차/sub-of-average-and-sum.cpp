#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	int sum = a + b + c;
	int mod = sum / 3;

	cout << sum << endl;
	cout << mod << endl;
	cout << sum - mod;
	return 0;
}