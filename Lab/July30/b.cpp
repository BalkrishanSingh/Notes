#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << "Balkrishan\n2302492\n";
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci Sequence upto n : ";
    for (int i = 0; i <= n; ++i)
    {
        cout << fib(i) << ' ';
    }
    return 0;
}
