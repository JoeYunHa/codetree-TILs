#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    int sum{ 0 };

    for (int i{ 0 }; i < len;i++) {
        if (isdigit(str[i]) != 0)
            sum += str[i] - '0';
    }
    cout << sum;
}