#include<iostream>
using namespace std;

int main() {
	int a, b;
	bool exi{ false };
	cin >> a >> b;

	for (int i{ a }; i <= b; i++) {
		if ((1920 % i == 0) && (2880 % i == 0)) {
			exi = true;
			break;
		}
	}

	if (exi)
		cout << 1;
	else
		cout << 0;
	
	return 0;
}