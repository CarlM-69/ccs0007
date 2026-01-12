#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int item[10];
	int limit;

	cout << "Input 10 numbers: ";
	for(int i = 0; i < 10; i++) {
		cin >> item[i];
	}

	size_t len = sizeof(item) / sizeof(item[0]);

	cout << left << setw(15) << "Odd numbers: " << right << setw(15) << "Even numbers:" << endl;
	for(int i = 0; i < len; i++) {
		if(item[i] % 2 != 0) cout << left << setw(15) << item[i];
		else cout << right << setw(10) << item[i] << endl;
	}
	return 0;
}
