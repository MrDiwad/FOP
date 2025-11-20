#include <iostream>
using namespace std;

int rotateArrayRight(int* array,int size) {
	int numbersOfRotate;
	cout << "Input numbers of rotate: " << endl;
	cin >> numbersOfRotate;
	numbersOfRotate = numbersOfRotate % size;

	// Pętla zewnętrzna: Wykonuje k rotacji (o 1 pozycję każda)
	for (int i = 0; i < numbersOfRotate; i++) {

		// KROK A: Zapisz ostatni element (ten, który musi się zawinąć)
		int lastElement = array[size - 1];

		// KROK B: Przesuń wszystkie elementy o 1 w prawo.
		// Pętla musi iść od końca do 1, aby uniknąć nadpisania danych!
		for (int j = size - 1; j > 0; j--) {
			array[j] = array[j - 1];
		}

		// KROK C: Wstaw zapisany element na początek
		array[0] = lastElement;
	}

	for (int k = 0; k < size; k++) {
		cout << array[k]<< " ";
	}
	return 0;
}

int rotateArrayLeft(int*array,int size) {
	int numbersOfRotate;
	cout << "Input numbers of rotate: " << endl;
	cin >> numbersOfRotate;
	numbersOfRotate = numbersOfRotate % size;

	// Pętla zewnętrzna: Wykonuje k rotacji (o 1 pozycję każda)
	for (int i = 0; i < numbersOfRotate; i++) {

		// KROK A: Zapisz ostatni element (ten, który musi się zawinąć)
		int firstElement = array[0];

		// KROK B: Przesuń wszystkie elementy o 1 w prawo.
		// Pętla musi iść od końca do 1, aby uniknąć nadpisania danych!
		for (int j = 0; j < size-1; j++) {
			array[j] = array[j + 1];
		}

		// KROK C: Wstaw zapisany element na początek
		array[size-1] = firstElement;
	}

	for (int k = 0; k < size; k++) {
		cout << array[k] << " ";
	}
	return 0;
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
	cout << "Do you want to rotate right or left? (1-right 2-left)" << endl;
	while (true) {
		int answer;
		cin >> answer;
		if (answer == 1) {
			rotateArrayRight(tab, length);
			delete[] tab;
			break;
		}
		else if (answer == 2) {
			rotateArrayLeft(tab, length);
			delete[] tab;
			break;
		}
		else {
			cout << "Provide correct number!"<<endl;
		}

	}
	

	
}
