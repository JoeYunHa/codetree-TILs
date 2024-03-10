#include<iostream>
#include<array>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	// 97~122 알파벳 소문자 아스키 코드
	
	const size_t SIZE{ 26 };
	array<int, SIZE> cmp{ 0 };

	string ans;

	for (int i{ 0 }; i <= str.length() - 1; i++) {
		cmp[str[i] - 97]++;
		if (str[i] != str[i+1]) {
			ans += str[i];
			ans += to_string(cmp[str[i] - 97]);
			cmp[str[i] - 97] = 0;
		}

	}
	
	cout << ans.length() << "\n" << ans;

}