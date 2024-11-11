#include <iostream>
#include <string.h>

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
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;

    try
    {

        cout << "the result is : " << division(a, b);
    }
    catch (runtime_error ac)
    {
        cout << "error : " << ac.what();
    }
    catch (...)
    {
        cout << " Default error" << endl;
    }

    return 0;
}