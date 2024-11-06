#include <iostream>
using namespace std;
class Demo
{
private:
    int a;

public:
    Demo()
    {
        cout << "Object created\n";
    }
    ~Demo()
    {
        cout << "Object Destroyed\n";
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d1;
    {
        Demo d2;
    }
    {
        Demo d3;
    }
}