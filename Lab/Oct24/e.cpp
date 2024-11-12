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

class C : public A
{
public:
    void displayC()
    {
        cout << "Inside C\n";
        displayA();
    }
};

class D : public B
{
public:
    void displayD()
    {
        cout << "Inside D\n";
        displayB();
    }
};

int main()
{
    cout << "Ayush Mishra\n2302490\n";
    C c;
    c.displayC();
    D d;
    d.displayD();
    return 0;
}
