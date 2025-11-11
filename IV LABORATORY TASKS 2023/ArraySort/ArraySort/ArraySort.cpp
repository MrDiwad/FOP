#include <iostream>
using namespace std;

int tab[5] = { 5,1,4,2,8 }, length = sizeof(tab) / sizeof(int);

void drukujTablice(const std::string& tytul, int arr[], int rozmiar) {
	cout << tytul;
	for (int i = 0; i < rozmiar; i++) {
		cout << arr[i] << " ";
	}
	cout << std::endl;
}

int main()
{
	
	for (int i = 0; i < length-1; i++) {
		for (int j = 0; j < length-1; j++) {
			if (tab[j] > tab[j+1]) {
				int help = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = help;
			}
		}
	}
	drukujTablice("Po sortowaniu: ", tab, length);
	
}
