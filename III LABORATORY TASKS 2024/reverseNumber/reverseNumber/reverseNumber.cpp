#include <iostream>
#include <string>
using namespace std;

int number;

int main()
{
    cout << "Input a number"<<endl;
	cin >> number;
	string str = to_string(number);
	int i=str.length();
	for (int j = 0; j < i / 2; j++) {
		char temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	cout << "reversed number: " << stoi(str) << endl;
	return 0;
	
}