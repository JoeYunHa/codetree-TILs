#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	const size_t SIZE{ 20 };
	string arr[SIZE];
	int n;
	cin >> n;

	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
	}
	char cmp;
	cin >> cmp;

	int sum{ 0 };
	int count{ 0 };

	for (int i{ 0 }; i < n; i++) {
		if (arr[i][0] == cmp) {
			sum += arr[i].length();
			count++;
		}
	}

	double mod = static_cast<double>(sum) / static_cast<double>(count);
	cout << count << " ";
	cout << fixed << setprecision(2) << mod;

}