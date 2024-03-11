#include<iostream>
using namespace std;

int main() {
    char alpha;
    cin >> alpha;

    if (alpha == 'a')
        cout << "z";
    else
        cout << (char)(alpha - 1);

}