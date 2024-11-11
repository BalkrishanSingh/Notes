#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Public section of Class A";
    }
};

class B
{

public:
    void display()
    {
        cout << "Public section of Class B";
    }
};

class C : public A, public B
{
public:
};

int main()
{
    C c;
    c.A::display();

    return 0;
}