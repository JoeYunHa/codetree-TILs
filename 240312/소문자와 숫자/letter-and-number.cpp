#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    for (int i{ 0 }; i < len;i++) {
        if (isalpha(str[i]) != 0)
            cout << (char)tolower(str[i]);
        else if (isdigit(str[i]) != 0)
            cout << str[i];
    }
}