#include <iostream>
using namespace std;

int main()
{
	int tab[8] = { 3,6,9,6,3,4,3,2 }, length = sizeof(tab) / sizeof(int);
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (tab[j] > tab[j + 1]) {
				int temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}

		}
	}
	
	cout << "Array without duplicates: ";
	for (int k = 0; k < length; k++) {
		if (tab[k] == tab[k + 1]) {
			continue;
		}
		else {
			cout << tab[k]<< " ";
		}

	}

}