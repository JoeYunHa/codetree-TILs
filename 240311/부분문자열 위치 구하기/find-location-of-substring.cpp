#include<iostream>
#include<string>
using namespace std;

int main() {
	string input_str;
	string target_str;
	cin >> input_str;
	cin >> target_str;

	int input_len = input_str.length();
	int target_len = target_str.length();

	int start_idx{ -1 };
	bool exi = false;

	for (int i{ 0 }; i < input_len - target_len + 1; i++) {
		for (int j{ 0 }; j < target_len; j++) {
			if (input_str[i + j] == target_str[j])
				exi = true;
			else {
				exi = false;
				break;
			}
		}
		if (exi) {
			start_idx = i;
			break;
		}
	}

	cout << start_idx;
}