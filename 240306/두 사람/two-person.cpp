#include<iostream>
using namespace std;

int main() {
	int firstAge, secondAge;
	char firstSex, secondSex;

	cin >> firstAge >> firstSex;
	cin >> secondAge >> secondSex;

	if (((firstAge >= 19) && (firstSex == 'M')) || ((secondAge >= 19) && (secondSex == 'M')))
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;

}