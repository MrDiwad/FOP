#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Provide a number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum up to " << n << " is " << sum << endl;
    cout << "Another idea to calculate sum " << (n * (n + 1)) / 2 << endl;
}