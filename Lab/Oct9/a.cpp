#include <iostream>
using namespace std;

class Number
{

public:
    int value;
    Number(int x)
    {
        value = x;
    }

    void operator-()
    {
        value = -value;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Number num(5);
    -num;          // Overloading unary minus
    num.display(); // Output: -5
    return 0;
}
