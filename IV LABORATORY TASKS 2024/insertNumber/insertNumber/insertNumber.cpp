#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main()
{
	int tab[MAX_SIZE] = { 3,56,7,4,21,54 };
	int positon,number,length=0;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (tab[i] != 0) {
			length += 1;
		}
	}
	cout << "Write a number"<<endl;
	cin >> number;
	cout << "Write an index"<<endl;
	cin >> positon;
	for (int k = length-1; k >= positon; k--) {
		tab[k + 1] = tab[k];

	}
	tab[positon] = number;

	for (int j = 0; j < length + 1; j++) {
		cout << tab[j]<< " ";
	}
}
