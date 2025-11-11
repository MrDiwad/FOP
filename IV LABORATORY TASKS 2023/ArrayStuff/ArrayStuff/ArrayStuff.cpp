#include <iostream>
using namespace std;

int main()
{
    int tab[5] = { 5,1,4,2,8 };
    int length = sizeof(tab) / sizeof(int);
    int sum=0;
    for (int i = 0; i < length; i++) {
        sum += tab[i];
    }
    cout << "Sum is " << sum << endl;
}