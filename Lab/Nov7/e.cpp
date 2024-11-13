#include <iostream>
using namespace std;
class demo
{
public:
    void show()
    {
        cout << "show function";
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";
    demo *ptr = new demo;
    ptr->show();
}