#include <iostream>
using namespace std;

class Complex
{
public:
    int r, i;

    Complex(int x, int y)
    {
        r = x;
        i = y;
    }
    Complex()
    {
    }
    void Display()
    {
        cout << r << " + " << i << "i" << endl;
    }
    Complex operator+(const Complex &other)
    {
        return Complex(r + other.r, i + other.i);
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Complex a(10, 20), b(20, 30), c;
    c = a + b;
    a.Display();
    b.Display();
    c.Display();
    return 0;
}