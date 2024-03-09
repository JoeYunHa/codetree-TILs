#include<iostream>
#include<array>
using namespace std;

int main() {
	const size_t SIZE{ 4 };
	array<array<int, SIZE>, SIZE> arr{ 0 };

	int sum{ 0 };

	for (size_t i{ 0 }; i < SIZE; i++) {
		for (size_t j{ 0 }; j < SIZE; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (size_t i{ 0 }; i < SIZE; i++) {
		for (size_t j{ 0 }; j < SIZE; j++) {
			if (i >= j)
				sum += arr[i][j];
		}
	}

	cout << sum;

	return 0;
}