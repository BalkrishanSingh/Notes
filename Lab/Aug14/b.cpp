#include <iostream>
using namespace std;
class Demo
{
private:
    int a;

public:
    Demo(int x)
    {
        a = x;
    }
    Demo(Demo &x)
    {
        a = x.a;
    }
    int display()
    {
        cout << "Output is " << a << endl;
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d1(10);
    d1.display();
    Demo d2(d1);
    d2.display();
}