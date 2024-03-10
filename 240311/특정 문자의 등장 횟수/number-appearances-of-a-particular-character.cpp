#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len_str = str.length();
	int ee_cnt{ 0 };
	int eb_cnt{ 0 };

	for (int i{ 0 }; i < len_str - 1; i++) {
		if (str[i] == 'e' && str[i + 1] == 'e')
			ee_cnt++;
		else if (str[i] == 'e' && str[i + 1] == 'b')
			eb_cnt++;
	}

	cout << ee_cnt << " " << eb_cnt;
}