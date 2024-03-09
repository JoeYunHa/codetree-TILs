#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	char alpha = 65;

	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < i; j++)
			cout << "  ";
		for (int k{ n }; k > i; k--) {
			cout << alpha << " ";
			alpha++;
			if (alpha > 90)
				alpha -= 26;
		}
		cout << "\n";
	}

	return 0;
}