#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    int scalar = 2;
    int length = sizeof(matrix) / sizeof(matrix[0]);
    for (int i = 0; i < length; i++) {
        cout << "[ ";
        for (int j = 0; j < length; j++) {
            matrix[i][j] *= scalar;
            cout << matrix[i][j] << " ";
        }
        cout << "] ";
    }
}
