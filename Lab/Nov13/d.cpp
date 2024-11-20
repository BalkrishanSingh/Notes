#include <iostream>
using namespace std;
int division(int num, int den)
{
    try
    {
        if (den == 0)
        {
            throw runtime_error("division by zero");
        }
        return num / den;
    }
    catch (const exception &e)
    {
        cout << "caught in division :" << e.what() << endl;
        throw;
    }
}
int main()
{
    cout << "Balkrishan\n2302492\n";
    int result;
    try
    {
        result = division(20, 0);
        cout << "result=" << result << endl;
    }
    catch (const exception &e)
    {
        cout << "caught in main :" << e.what() << endl;
    }
    return 0;
}