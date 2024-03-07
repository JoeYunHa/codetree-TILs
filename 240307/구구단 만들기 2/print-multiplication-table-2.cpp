#include<iostream>
using namespace std;

int main() {
	const int MAX{ 4 };
	int a, b;
	cin >> a >> b;

	for (int i{ 1 }; i <= MAX; i++) {
		for (int j{ b }; j >= a; j--) {
			cout << j << " * " << i * 2 << " = " << j * i * 2;
			if (j != a)
				cout << " / ";
		}
		cout << "\n";
	}
}