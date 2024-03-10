#include<iostream>
#include<string>
using namespace std;

int main() {
	const size_t SIZE{ 11 };
	string arr[SIZE];
	int n;
	cin >> n;
	int sum{ 0 };
	int count{ 0 };
	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
		if (arr[i][0] == 'a')
			count++;
		sum += arr[i].length();
	}

	cout << sum << " " << count;
}