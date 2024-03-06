#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i{ 1 }; i <= a; i++) {
		if ((i % 2 == 0) && (i % 4 != 0))
			continue;
		int quo = i / 8;
		if (quo % 2 == 0)
			continue;
		int rem = i % 7;
		if (rem < 4)
			continue;
		cout << i << " ";
	}

	return 0;
}