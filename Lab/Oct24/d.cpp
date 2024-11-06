#include <iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
public:
    void displayB()
    {
        cout << "Class B\n";
        displayA();
    }
};

class C : public A
{
public:
    void displayC()
    {
        cout << "Class C\n";
        displayA();
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    B b;
    b.displayB();
    C c;
    c.displayC();

    return 0;
}