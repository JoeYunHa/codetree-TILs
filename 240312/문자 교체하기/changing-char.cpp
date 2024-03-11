#include<iostream>
#include<string>
using namespace std;

int main() {
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;

	for (int i{ 0 }; i < 2; i++) 
		str2[i] = str1[i];

	cout << str2;

}