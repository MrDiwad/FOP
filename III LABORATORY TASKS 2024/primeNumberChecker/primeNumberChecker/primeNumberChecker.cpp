#include <iostream>
using namespace std;
int main()
{
    int number;
    bool prime = true;
    cout << "Provide a number to check if is a prime" << endl;
    cin >> number;
    if (number <= 1) {
        cout << number << " is not a prime number!" << endl;
    }
    else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << number << " is a prime number!" << endl;
        }
        else {
            cout << number << " is not a prime number!" << endl;
        }
    }
}