#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int q;
	cin >> s >> q;

	for (int i{ 0 }; i < q; i++) {
		int type{ 0 };
		cin >> type;
		if (type == 1) {
			int a{ 0 };
			int b{ 0 };
			cin >> a >> b;
			char tmp = s[a - 1];
			s[a - 1] = s[b - 1];
			s[b - 1] = tmp;
			cout << s << endl;
		}
		else if (type == 2) {
			char a;
			char b;
			cin >> a >> b;
			for (auto& c : s) {
				if (c == a)
					c = b;
			}
			cout << s << endl;
		}
	}

	return 0;
}