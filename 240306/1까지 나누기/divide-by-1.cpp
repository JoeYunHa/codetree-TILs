#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count{ 0 };
	int quo{ n };

	for (int i{ 1 }; i <= n; i++) {
		quo /= i;
		count++;
		if (quo <= 1)
			break;
	}
	cout << count << endl;
	return 0;
}