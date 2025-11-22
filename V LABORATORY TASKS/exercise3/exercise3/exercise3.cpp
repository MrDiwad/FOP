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
		for (int w = 0; w < n-1; w++) {
			for (int k = 0; k < n-1; k++) {
				if (tab[k] > tab[k + 1]) {
					int temp = tab[k + 1];
					tab[k + 1] = tab[k];
					tab[k] = temp;
				}
			}
		}
		
		for (int z = 0; z < n; z++) {
			cout<< tab[z]<<" ";
		}
		delete[] tab;

	
}