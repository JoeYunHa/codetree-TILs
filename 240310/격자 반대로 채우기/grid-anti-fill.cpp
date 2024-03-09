#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> v(n, vector<int>(n, 0));

	int ele{ 1 };
	if (n % 2 == 0) {
		for (int col{ n - 1 }; col >= 0; col--) {
			if (col % 2 != 0) {
				for (int row{ n - 1 }; row >= 0; row--) {
					v[row][col] = ele;
					ele++;
				}
			}
			else {
				for (int row{ 0 }; row < n; row++) {
					v[row][col] = ele;
					ele++;
				}
			}
		}
	}
	else {
		for (int col{ n - 1 }; col >= 0; col--) {
			if (col % 2 == 0) {
				for (int row{ n - 1 }; row >= 0; row--) {
					v[row][col] = ele;
					ele++;
				}
			}
			else {
				for (int row{ 0 }; row < n; row++) {
					v[row][col] = ele;
					ele++;
				}
			}
		}
	}

	for (const auto& row : v) {
		for (const auto& ele : row) {
			cout << ele << " ";
		}
		cout << "\n";
	}
}