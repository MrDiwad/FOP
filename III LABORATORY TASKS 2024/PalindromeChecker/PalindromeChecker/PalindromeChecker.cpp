#include <string>
#include <iostream>
using namespace std;

string text;

int main()
{
    cout << "Input a text to check if it is palindrom" << endl;
    cin >> text;
    int n = text.length();
    bool palindrom = true;
    for (int i = 0; i < n / 2; i++) {
        if (text[i] != text[n - i - 1]) {
            palindrom = false;
            break;
        }
    }
    if (palindrom) {
        cout << text << " is palindrom!" << endl;
    }
    else {
        cout << text << " is not a palindrom!" << endl;
    }
}
