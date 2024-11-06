
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, r = 0, i = 0;
    cout << "Balkrishan\n2302492\n";
    cout << "Enter number: ";
    cin >> n;
    while (n)
    {
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    cout << "reversed : " << r;

    return 0;
}