#include<iostream>
#include<string>
using namespace std;

int main() {
    string strA;
    string strB;
    cin >> strA;
    cin >> strB;

    int n{ 0 };
    bool exi = false;
    int len = strA.length();

    for (int i{ 0 }; i < len; i++) {
        strA = strA.substr(len - 1, 1) +
            strA.substr(0, len - 1);
        n++;
        if (strA == strB) {
            exi = true;
            break;
        }
    }

    if (exi)
        cout << n;
    else
        cout << "-1";
    
}