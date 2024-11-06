#include <iostream>
using namespace std;

int main()
{
    cout << "Balkrishan\n2302492\n";
    int n;
    cout << "Enter an integer for factorial: ";
    cin >> n;

    int factorial = 1;
    int i = 1;

    while (i <= n)
    {
        factorial *= i;
        ++i;
    }

    cout << n << " factorial = " << factorial;

    return 0;
}
