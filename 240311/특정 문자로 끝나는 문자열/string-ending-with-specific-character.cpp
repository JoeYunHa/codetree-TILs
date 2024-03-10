#include<iostream>
#include<string>
using namespace std;

int main() {
	const size_t SIZE{ 10 };
	string arr[SIZE];
	char cmp;
	for (int i{ 0 }; i < SIZE; i++) {
		cin >> arr[i];
	}

	cin >> cmp;

	bool exi = false;

	for (int i{ 0 }; i < SIZE; i++) {
		if (arr[i][arr[i].length() - 1] == cmp) {
			cout << arr[i] << endl;
			exi = true;
		}
	}
	if (exi == false)
		cout << "None";

}