#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    for (int i{ 0 }; i < len;i++) {
        if (isupper(str[i]) != 0)
            str[i] = (char)tolower(str[i]);
        else
            str[i] = (char)toupper(str[i]);
    }
    cout << str;
    
}