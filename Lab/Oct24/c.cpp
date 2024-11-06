#include <iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout << "Inside A\n";
    }
};

class B
{
public:
    void displayB()
    {
        cout << "Inside B\n";
    }
};

class C : public A, public B
{

public:
    void displayC()
    {
        cout << "Inside C\n";
        displayB();
        displayA();
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    C c;
    c.displayC();
    return 0;
}