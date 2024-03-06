#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i{ 0 }; i < n; i++) {
		int num{ 0 };
		cin >> num;
		if ((num % 2 == 1) && (num % 3 == 0))
			cout << num << endl;
	}

	return 0;
}