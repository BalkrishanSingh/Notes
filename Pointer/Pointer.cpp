#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    int *aPtr = &a;
    cout << aPtr << endl;
    cout << *aPtr << endl;
    aPtr++;
    cout << aPtr << endl;
    cout << *aPtr << endl;
    return 0;
}