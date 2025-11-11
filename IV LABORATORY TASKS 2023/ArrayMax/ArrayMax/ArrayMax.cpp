#include <iostream>
using namespace std;


int main()
{
    int tab[5] = { 7,2,9,4,5 };
    int max = tab[0];
    int length = sizeof(tab) / sizeof(int);
    for (int i = 0; i < length; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    cout << "Biggest number is " << max << endl;
}