#include <iostream>
using namespace std;

bool arraySorted(int*array,int length) {
	for (int i = 0; i < length - 1; i++) {
			if (array[i] > array[i + 1]) {
				return false;
			}
	}
	return true;
}

int main()
{
	int length;
	cout << "Input length of array" << endl;
	cin >> length;
	int* tab = new int[length];
	cout << "Now input numbers: " << endl;
	for (int i = 0; i < length; i++) {
		cin >> tab[i];
	}
	if (arraySorted(tab, length)) {
		cout << "Array is sorted!" << endl;
	}
	else {
		cout << "Array is not sorted!" << endl;
	}
	delete[]tab;
}