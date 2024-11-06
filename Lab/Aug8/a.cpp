#include <iostream>
using namespace std;
class Calc
{
    int a, b;

public:
    void input()
    {

        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void add()
    {
        cout << "Sum is " << a + b;
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Calc calc;
    calc.input();
    calc.add();

    return 0;
}