#include<iostream>
#include<string>
using namespace std;

int main() {
	const size_t SIZE{ 10 };
	string arr[SIZE];

	for (int i{ 0 }; i < SIZE; i++) {
		cin >> arr[i];
	}

	for (int i{ 0 }; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}