#include <iostream>
using namespace std;
class Demo
{
private:
    int a;
    void display(int b)
    {
        cout << "Output is " << b;
    }

public:
    void sum()
    {
        cout << "Enter number to be squared :";
        cin >> a;
        display(a * a);
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d;
    d.sum();
}