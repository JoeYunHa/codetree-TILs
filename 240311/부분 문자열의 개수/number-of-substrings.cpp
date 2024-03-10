#include<iostream>
#include<string>
using namespace std;

int main() {
	string input_str;
	string target_str;
	int cnt{ 0 };
	cin >> input_str;
	cin >> target_str;

	int len = input_str.length();

	for (int i{ 0 }; i < len - 1; i++) {
		if (input_str[i] == target_str[0] && input_str[i + 1] == target_str[1])
			cnt++;
	}

	cout << cnt;

	return 0;
	
}