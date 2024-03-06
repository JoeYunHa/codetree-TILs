#include<iostream>
using namespace std;

int main() {
	int a;
	int b, c, d, e;
	cin >> a;
	cin >> b >> c >> d >> e;

	int ans = (a > b ? 1 : 0);
	cout << ans << endl;
	ans = (a > c ? 1 : 0);
	cout << ans << endl;
	ans = (a > d ? 1 : 0);
	cout << ans << endl;
	ans = (a > e ? 1 : 0);
	cout << ans << endl;

	return 0;

}