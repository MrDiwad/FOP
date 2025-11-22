#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "How many elements" << endl;
    cin >> n;
    int* tab = new int[n];
    cout << "Now input numbers" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
        sum += tab[i];
    }
    cout << "Sum is " << sum << endl;
    delete[] tab;
}