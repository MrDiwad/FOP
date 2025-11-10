#include <iostream>
using namespace std;

int n,first=0,second=1;

int main()
{
	cout << "Provide amount of numbers of Fibo sequence" << endl;
	cin >> n;
	cout << "===========================================" << endl;
	if (n == 0) {
		cout << "0" << endl;
	}
	else if (n == 1) {
		cout << "0" << endl;
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
		cout << "1" << endl;
		for (int i = 2; i < n; i++) {
			int helpNumber = second;
			cout << first + second << endl;
			second = first + second;
			first = helpNumber;
		}
	}
}
