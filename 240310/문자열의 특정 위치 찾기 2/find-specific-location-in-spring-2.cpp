#include<iostream>
#include<string>
using namespace std;

int main() {
	const size_t SIZE{ 5 };
	string arr[SIZE] = { "apple" ,"banana" ,"grape" ,"blueberry" ,"orange" };
	string ans[SIZE];
	char cmp;
	cin >> cmp;
	int count{ 0 };

	
	for (int i{ 0 }; i < SIZE; i++) {
		for (int j{ 0 }; j < 2; j++) {
			if (arr[i][2 + j] == cmp) {
				ans[count] = arr[i];
				count++;
			}
		}
	}

	for (int i{ 0 }; i < count; i++) {
		cout << ans[i] << endl;
	}
	cout << count;




}