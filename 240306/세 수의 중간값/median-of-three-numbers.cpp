#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int ans = (((b > a) && (b < c)) ? 1 : 0);
	cout << ans << endl;

	return 0;

}