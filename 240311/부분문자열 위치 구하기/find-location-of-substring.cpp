#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string sub;
	cin >> str;
	cin >> sub;

	int start_idx{ -1 };

	if (str.find(sub) != string::npos)
		start_idx = str.find(sub);
	cout << start_idx;
	
}