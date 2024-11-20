#include <iostream>
using namespace std;
int division(int x, int y)
{
    if (y == 0)
    {
        throw runtime_error("can't divide by 0");
    }
    return x / y;
}
int main()
{
    cout << "Balkrishan\n2302492\n";
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;
    try
    {
        int result = division(a, b);
        cout
            << "the result is : " << result;
    }
    catch (runtime_error ac)
    {
        cout << "error : " << ac.what();
    }

    return 0;
}