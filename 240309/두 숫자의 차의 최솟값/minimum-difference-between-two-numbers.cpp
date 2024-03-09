#include<iostream>
#include<array>
using namespace std;

int main() {
	const size_t MAX_SIZE{ 105 };
	array<int, MAX_SIZE> arr{ 0 };
	int n;
	cin >> n;

	for (int i{ 0 }; i < n; i++) 
		cin >> arr[i];

	int min = arr[1] - arr[0];

	for (int i{ 2 }; i < n; i++) {
		if (arr[i] - arr[i - 1] < min)
			min = arr[i] - arr[i - 1];
	}

	cout << min;

	return 0;
}