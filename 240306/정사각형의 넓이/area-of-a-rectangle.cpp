#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int area = pow(n, 2);
	cout << area << endl;
	if (n < 5)
		cout << "tiny";
	return 0;
}