#include<iostream>
#include<string>
using namespace std;

int main() {
	int min{ 20 };
	int max{ 0 };
	for (int i{ 0 }; i < 3; i++) {
		string str;
		cin >> str;
		if (str.length() < min)
			min = str.length();
		if (str.length() > max)
			max = str.length();
	}

	cout << max - min;

	return 0;

}