#include <iostream>
using namespace std;

int tabA[5] = {1, 5, 8, 12, 1};
int tabB[5] = {12, 3, 5, 0, 9};
int lengthA = sizeof(tabA) / sizeof(tabA[0]);
int lengthB = sizeof(tabB) / sizeof(tabB[0]);


int main()
{
	for (int i = 0; i < lengthA; i++) {
		for (int j = 0; j < lengthB; j++) {
			if (tabA[i] == tabB[j]) {
				cout << "Intersection number " << tabA[i] << endl;
				break;
			}
		}
	}
}