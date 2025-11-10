#include <iostream>
using namespace std;

int first, second, third;

int main()
{
    cout << "Input 3 numbers" << endl;
    cin >> first >> second >> third;
    int max=first;
    if (second > max && second>third){
        max = second;
        cout << "The biggest one is second one: " << second << endl;
    }
    else if (third > max && third > second) {
        max = third;
        cout << "The biggest one is third one: " << third << endl;
    }
    else {
        cout << "The biggest one is first one: " << first << endl;
    }
}

