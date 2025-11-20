#include <iostream>
using namespace std;

void removingAndShifting(int*array,int &size) {
	cout << "Insert index of number which you would like to remove" << endl;
	int index;
	cin >> index;
	for (int i = 0	; i < (size-index)-1; i++) {
		array[index + i] = array[index + i + 1];
	}
	size--;
	for (int k = 0; k < size; k++) {
		cout << array[k]<<" ";
	}
	
}

int main() {
	int length;
	cout << "Input length of array" << endl;
	cin >> length;
	int* tab = new int[length];
	cout << "Now input numbers: " << endl;
	for (int i = 0; i < length; i++) {
		cin >> tab[i];
	}

	removingAndShifting(tab, length);
	delete[]tab;
}