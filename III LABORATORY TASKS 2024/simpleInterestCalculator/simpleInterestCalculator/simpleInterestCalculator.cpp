#include <iostream>
using namespace std;

int main()
{
	int principal, time,interest;
	float rate;
	cout << "Provide principal, rate, time in years" << endl;
	cin >> principal >> rate >> time;
	interest = (principal * rate * time) / 100;
	cout << "Your simple interest is " << interest << endl;
	return 0;
}
