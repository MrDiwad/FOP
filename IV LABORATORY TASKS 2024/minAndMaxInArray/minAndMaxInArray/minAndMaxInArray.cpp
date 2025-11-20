#include <iostream>
using namespace std;

int main()
{
	int tab[5] = { 2,4,7,3,2 },min=tab[0],max=tab[0],length=sizeof(tab)/sizeof(int);
	for (int i = 0; i < length; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
		else if (tab[i] > max) {
			max = tab[i];
		}
	}
	cout << "Max is " << max << " Min is " << min << endl;
}
