#include <iostream>

using namespace std;

int main()
{
    cout << "Balkrishan\n2302492\n";
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even.\n";
    }
    else
    {
        cout << n << " is odd.";
    }

    return 0;
}
