// divby3and5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int first, second, third, foruth;
	cout << "Provide numbers for range"<<endl;
	cin >> first >> second >> third >> foruth;
	for (int i = first; i <= second; i++) {
		if (i % 3 == 0) {
			cout << i << " is divisible by 3" << endl;
		}
	}
	for (int i = third; i <= foruth; i++) {
		if (i % 5 == 0) {
			cout << i << " is divisible by 5" << endl;
		}

	}
}


