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
        cout << "caught in division" << e.what() << endl;
        throw;
    }
}

int sum(int a, int b)
{
    try
    {
        if (a < 0 || b < 0)
        {
            throw runtime_error("negative number are not allowed");
        }
        return a + b;
    }
    catch (const exception &e)
    {
        cout << "caught in sum" << e.what() << endl;
        throw;
    }
}
int main()
{
    int result;
    try
    {
        result = sum(10, division(20, 0));
        cout << "result=" << result << endl;
    }
    catch (const exception &e)
    {
        cout << "caught in main" << e.what() << endl;
    }
    return 0;
}