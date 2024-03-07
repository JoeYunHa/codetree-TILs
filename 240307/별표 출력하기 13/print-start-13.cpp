#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i{ 1 }; i <= 2*n; i++) {
		if (i % 2 == 1) {
			for (int j{ n }; j > (i/2); j--) {
				cout << "* ";
			}
		}
		else {
			for (int k{ 0 }; k < (i / 2); k++) {
				cout << "* ";
			}
		}
		cout << "\n";
	}
}