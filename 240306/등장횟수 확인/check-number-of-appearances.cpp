#include<iostream>
using namespace std;

int main() {
	const int num = 5;

	int count{ 0 };

	for (int i{ 0 }; i < num; i++) {
		int tmp{ 0 };
		cin >> tmp;
		if (tmp % 2 == 0)
			count++;
	}
	cout << count << endl;

	return 0;
}