#include<iostream>
#include<array>
using namespace std;

int main() {
	const size_t MAX_SIZE{ 105 };
	array<int, MAX_SIZE> arr{ 0 };
	int n;
	int count{ 0 };
	int idx{ 0 };
	cin >> n;

	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 2)
			count++;
		if (arr[i]==2&&count == 3)
			idx = i;
	}

	cout << idx + 1;

	return 0;
}