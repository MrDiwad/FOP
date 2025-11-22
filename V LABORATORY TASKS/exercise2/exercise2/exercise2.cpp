#include <iostream>
using namespace std;

int main()
{
		int n;
		cout << "How many elements" << endl;
		cin >> n;
		int* tab = new int[n];
		cout << "Now input numbers" << endl;
		for (int i = 0; i < n; i++) {
			cin >> tab[i];
			
		}
		int max = tab[0];
		for (int j = 1; j < n; j++) {
			if (tab[j] > max) {
				max = tab[j];
			}
		}
		cout << "Max is " << max << endl;
		delete[] tab;
	
}