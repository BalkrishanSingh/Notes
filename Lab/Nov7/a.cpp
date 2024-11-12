#include <iostream>
using namespace std;

class demo
{
    int y;

public:
    void getint(int y)
    {
        this->y = y;
    }
    void show()
    {
        cout << "the integer is : " << y;
    }
};

int main()
{
    demo d;
    cout << "Balkrishan\n2302492\n";
    d.getint(2);
    d.show();
}