#include <iostream>
using namespace std;

int main()
{
	int tab[5] = {2,7,4,5,6};
	int length = sizeof(tab) / sizeof(int);
	for (int i = 0; i < length / 2; i++) {
		int temp = tab[length - 1 - i];
		tab[length - 1 - i] = tab[i];
		tab[i] = temp;
	}
	for (int j = 0; j < length; j++) {
		cout << tab[j]<<endl;
	}
}