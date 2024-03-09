#include<iostream>
#include<cmath>
#include<array>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	const size_t MAX_SIZE{ 10 };
	array<int, MAX_SIZE> arr{ 0 }; // 나머지 숫자의 종류의 수는 b가 최대

	while (a > 1) {
		arr[a % b]++;
		a /= b;
	}

	int sum{ 0 };
	
	for (int e : arr) {
		if (e != 0)
			sum += pow(e, 2);
	}

	cout << sum;

	return 0;
}