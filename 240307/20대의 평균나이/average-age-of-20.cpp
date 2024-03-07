#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int sum{ 0 };
	int count{ 0 };
	int age{ 0 };
	
	while (1) {
		cin >> age;
		if (age / 10 != 2)
			break;
		sum += age;
		count++;
	}

	double mod = static_cast<double>(sum) / static_cast<double>(count);
	cout << fixed << setprecision(2) << mod << endl;

	return 0;

}