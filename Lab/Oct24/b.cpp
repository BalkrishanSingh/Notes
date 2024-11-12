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

class B : public A
{
public:
    void displayB()
    {
        cout << "Inside B\n";
        displayA();
    }
};

class C : public B
{
public:
    void displayC()
    {
        cout << "Inside C\n";
        displayB();
    }
};

int main()
{
    cout << "Ayush Mishra\n2302490\n";
    B b;
    b.displayB();
    C c;
    c.displayC();
    return 0;
}