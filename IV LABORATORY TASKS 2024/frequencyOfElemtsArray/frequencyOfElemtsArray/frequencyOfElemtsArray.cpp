#include <iostream>
using namespace std;

int main()
{
	int tab[8] = {3,6,9,6,3,4,3,2}, length=sizeof(tab)/sizeof(int);
	for (int i = 0; i < length-1; i++) {
		for (int j = 0; j < length-1-i; j++) {
			if (tab[j] > tab[j + 1]) {
				int temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}

		}
	}
	int counter = 1;
	for (int k = 0; k < length; k++) {
		int currentNumber = tab[k];
		if (tab[k + 1] == currentNumber) {
			counter += 1;
		}
		else {
			cout << "Frequency of " << currentNumber << " is " << counter << endl;
			counter = 1;
			
		}
		
		
	}

}