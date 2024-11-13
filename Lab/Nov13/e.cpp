#include <iostream>

using namespace std;
int main()
{

    int a, b;
    cout << "enter a and b: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw runtime_error("can't divide 0");
        }
        cout << "the result is : " << a / b;
    }
    catch (exception e)
    {
        cout << " error is " << e.what() << endl;
    }

    return 0;
}