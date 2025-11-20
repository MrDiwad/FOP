#include <iostream>
using namespace std;

void swapElements(int*array,int size) {
	if (size % 2 == 0) {
		for (int i = 0; i < (size / 2); i++) {
			int temp = array[(size / 2) + i];
			array[(size / 2) + i] = array[i];
			array[i] = temp;
		}
	}
	else {
		for (int i = 0; i < (size / 2); i++) {
			int temp = array[(size / 2) + i+1];
			array[(size / 2) + i+1] = array[i];
			array[i] = temp;
		}
	}
	for (int k = 0; k < size; k++) {
		cout << array[k] << " ";
	}
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
	swapElements(tab, length);
	delete[]tab;
}