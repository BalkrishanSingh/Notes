#include <iostream>
using namespace std;

int main()
{
    cout << "Balkrishan\n2302492\n";
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum : " << sum;

    return 0;
}
