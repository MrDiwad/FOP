#include <iostream>
using namespace std;

int main()
{
    int base, exponent, x;
    cout << "Provide a base and exponent" << endl;
    cin >> base >> exponent;
    x = base;
    for (int i = 0; i < exponent; i++) {
        base *= x;
    }
    cout << x << " to the power of " << exponent << " is " << base << endl;
    return 0;
}
