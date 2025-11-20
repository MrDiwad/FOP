#include <iostream>
using namespace std;

int main()
{
    int tab[5] = { 3,6,9,7,2 };
    int length = sizeof(tab) / sizeof(int);
    float avg = 0;
    for (int i = 0; i < length; i++) {
        avg += tab[i];
    }
    cout << "Average is " << avg / length<<endl;
}