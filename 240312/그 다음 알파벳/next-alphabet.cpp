#include<iostream>
using namespace std;

int main() {
	char a;
	cin >> a;

	int ans = ((int)a + 1);
	if (ans == 123)
		ans = 97;

	cout << (char)ans;
}