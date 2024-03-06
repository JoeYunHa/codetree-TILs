#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	int ans = (((a%3==0) || (a%5==0)) ? 1 : 0);
	cout << ans << endl;

	return 0;

}