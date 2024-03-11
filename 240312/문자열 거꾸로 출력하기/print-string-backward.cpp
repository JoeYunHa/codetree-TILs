#include<iostream>
#include<string>
using namespace std;

int main() {
    while (1) {
        string str;
        cin >> str;
        if (str == "END")
            break;
        string::iterator it;
        for (it = str.end() - 1; it != str.begin(); it--)
            cout << *it;
        cout << *it << endl;
    }
}