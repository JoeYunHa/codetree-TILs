#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n, vector<int>(m, 0)); // n*m 배열 0으로 초기화

	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			cin >> v[i][j];
		}
	}

	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			int ele{ 0 };
			cin >> ele;
			if (ele == v[i][j])
				v[i][j] = 0;
			else
				v[i][j] = 1;
		}
	}

	for (const auto& e : v) {
		for (const auto& ele : e) {
			cout << ele << " ";
		}
		cout << "\n";
	}

	return 0;
}