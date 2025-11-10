#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int x,a0, a1, a2, a3,result;
	cout << "Provide x a0 a1 a2 a3" << endl;
	cin >> x >>a0 >> a1 >> a2 >> a3;
	result = a0 + (a1 * x) + (a2 * pow(x, 2)) + (a3 * pow(x, 3));
	cout << "pol(x)= " << result;
}

