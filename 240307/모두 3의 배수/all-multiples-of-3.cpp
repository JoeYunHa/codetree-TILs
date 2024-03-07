#include<iostream>
using namespace std;

int main() {
	const int NUM{ 5 };
	bool satisfied = true;

	for (int i{ 0 }; i < NUM; i++) {
		int n{ 0 };
		cin >> n;
		if (n % 3 != 0)
			satisfied = false;
	}

	if (satisfied)
		cout << 1;
	else
		cout << 0;

	return 0;
}