#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int sum{ 0 };
    for (auto& ele : str) {
        sum += ele - '0';
    }
    cout << sum;
}