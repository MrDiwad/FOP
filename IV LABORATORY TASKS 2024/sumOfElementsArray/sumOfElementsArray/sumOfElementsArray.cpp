#include <iostream>
using namespace std;

int main()
{
    int tab[5],sum=0;
    cout << "input numbers"<<endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
    }
    for (int j = 0; j < 5; j++) {
        sum += tab[j];
    }
    cout << "sum is " << sum;
}