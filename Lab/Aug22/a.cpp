
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Balkrishan\nURN:2302492\n";
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int det = 0, i = 0;
    for (int j = 0; j < 3; j++)
    {

        det += arr[i][j] * ((arr[(i + 1) % 3][(j + 1) % 3] * arr[(i + 2) % 3][(j + 2) % 3]) - (arr[(i + 1) % 3][(j + 2) % 3] * arr[(i + 2) % 3][(j + 1) % 3]));
    }
    cout << "Determinant is " << det;
}