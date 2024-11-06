#include <iostream>
using namespace std;
class A
{
public:
    void DisplayA()
    {
        cout << "Inside A\n";
    }
};

class B : public A
{
public:
    void DisplayB()
    {
        cout << "Inside B\n";
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    B b;
    b.DisplayA();
    b.DisplayB();
    return 0;
}