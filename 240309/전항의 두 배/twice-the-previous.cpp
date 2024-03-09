#include<iostream>
#include<array>
using namespace std;

int main() {
	const size_t SIZE{ 10 };
	array<int, SIZE> arr{ 0 };

	cin >> arr[0] >> arr[1];

	for (size_t i{ 2 }; i < SIZE; i++) {
		arr[i] = arr[i - 1] + 2 * arr[i - 2];
	}

	for (auto& e : arr)
		cout << e << " ";

	return 0;
}