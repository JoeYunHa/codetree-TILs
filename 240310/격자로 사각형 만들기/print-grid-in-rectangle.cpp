#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> v(n, vector<int>(n, 1));

	for (int i{ 1 }; i < n; i++) {
		for (int j{ 1 }; j < n; j++) {
			v[i][j] = v[i][j - 1] + v[i - 1][j] + v[i - 1][j - 1];
		}
	}
	

	for (const auto& row : v) {
		for (const auto& ele : row) {
			cout << ele << " ";
		}
		cout << "\n";
	}
}