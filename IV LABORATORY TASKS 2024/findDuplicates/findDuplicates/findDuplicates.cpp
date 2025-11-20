#include <iostream>
using namespace std;

int main()
{
	int tab[7] = { 2,3,3,7,3,7,1 };
	int length = sizeof(tab) / sizeof(int);
	for (int i = 0; i < length; i++) {
		for (int j = i+1; j < length; j++) {
			if (tab[i] == tab[j]) {
				cout << tab[i] << " has " << " duplicates!" << endl;
				continue;
			}
		}
	}
}