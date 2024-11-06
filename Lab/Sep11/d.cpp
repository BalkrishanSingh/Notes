#include <iostream>
using namespace std;
class First
{
public:
    void show1()
    {
        cout << "First class\n";
    }
};
class Second
{
public:
    First F;
    void show2()
    {
        F.show1();
        cout << "Second Class";
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";

    Second s;
    s.show2();
    return 0;
}