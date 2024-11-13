#include <iostream>

int division(int x, int y)
{
    if (y == 0)
    {
        throw runtime_error("can't divide 0");
    }
    return x / y;
}
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;
    try
    {

        cout << "the result is : " << division(a, b);
    }
    catch (runtime_error ac)
    {
        cout << "error : " << ac.what();
    }

    return 0;
}