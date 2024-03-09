#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;

	for (int i{ 0 }; i < n; i++) {
		int ele{ 0 };
		cin >> ele;
		if (ele % 2 == 0)
			v.push_back(ele);
	}

	// vector<int>::iterator it = v.end() - 1; 
	// v.end()는 마지막 원소 다음을 가리킴
	vector<int>::iterator it;

	for (it = v.end() - 1; it != v.begin(); it--)
		cout << *it << " ";
	cout << *it;

	return 0;
}