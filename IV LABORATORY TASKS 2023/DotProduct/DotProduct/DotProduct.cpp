#include <iostream>
using namespace std;

int main()
{
    int A[3] = {1, 2, 3}, B[3] = {4, 5, 6},length=sizeof(A)/sizeof(int),result=0;
    for (int i = 0; i < length; i++) {
        result += A[i] * B[i];
    }
    cout << result;
}