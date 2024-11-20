#include <iostream>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw runtime_error("can't divide by 0");
        }
        cout << "the result is : " << a / b;
    }
    catch (runtime_error ac)
    {
        cout << "error : " << ac.what();
    }
    return 0;
}