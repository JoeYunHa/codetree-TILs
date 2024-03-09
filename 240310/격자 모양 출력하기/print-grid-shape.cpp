#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(n, 0));

	for (int i{ 0 }; i < m; i++) {
		int row{ 0 };
		int col{ 0 };
		cin >> row >> col;
		v[row - 1][col - 1] = row * col;
	}
	

	for (const auto& row : v) {
		for (const auto& ele : row) {
			cout << ele << " ";
		}
		cout << "\n";
	}
}