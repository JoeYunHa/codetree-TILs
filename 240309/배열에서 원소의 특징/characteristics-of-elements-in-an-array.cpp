#include<iostream>
#include<array>
using namespace std;

int main() {
	const size_t SIZE{ 10 };
	array<int, SIZE> arr;

	int idx{ 0 }; // 3의 배수 처음 등장

	for (int i{ 0 }; i < arr.size(); i++) {
		cin >> arr[i];
		if (arr[i] % 3 == 0) {
			idx = i;
			break;
		}
	}
	cout << arr[idx - 1];
	return 0;
}