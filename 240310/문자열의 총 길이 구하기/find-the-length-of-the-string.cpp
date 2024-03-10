#include<iostream>
#include<string>
using namespace std;

int main() {
	const size_t SIZE{ 10 };
	string arr[SIZE];

	for (int i{ 0 }; i < SIZE; i++) {
		cin >> arr[i];
	}

	int sum{ 0 };

	for (int i{ 0 }; i < SIZE; i++) {
		sum += arr[i].length();
	}

	cout << sum;
}