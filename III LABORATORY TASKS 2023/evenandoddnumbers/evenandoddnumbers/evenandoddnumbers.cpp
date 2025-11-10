#include <iostream>
using namespace std;

int main()
{
	int first, second, third, fourth;
	cout << "Enter four integers for range: ";
	cin >> first >> second >> third >> fourth;
	for (int i = first; i <= second; ++i)
	{
		if (i % 2 == 0)
		{
			cout << i << " is even" << endl;
		}
		else
		{
			cout << i << " is odd" << endl;
		}
	}
	for (int i = third; i <= fourth; ++i)
	{
		if (i % 2 == 0)
		{
			cout << i << " is even" << endl;
		}
		else
		{
			cout << i << " is odd" << endl;
		}
	}
}
