#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int cnt{ 0 };
    vector<string> v;
    while (1) {
        string str;
        cin >> str;
        if (str == "0")
            break;
        cnt++;
        if (cnt % 2 == 1)
            v.push_back(str);
    }
    cout << cnt << endl;
    for (auto& e : v)
        cout << e << endl;
}