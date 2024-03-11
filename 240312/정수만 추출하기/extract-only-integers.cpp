#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    int len_1 = str1.length();
    int len_2 = str2.length();

    string a;
    string b;

    for (int i{ 0 }; i < len_1; i++) {
        if (isdigit(str1[i]) != 0)
            a += str1[i];
        else
            break;
    }
    for (int i{ 0 }; i < len_2; i++) {
        if (isdigit(str2[i]) != 0)
            b += str2[i];
        else
            break;
    }
    
    int sum = stoi(a) + stoi(b);
    cout << sum;
}