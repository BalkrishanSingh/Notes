#include <iostream>
using namespace std;

class Add
{
    int a, b;

public:
    Add(int x, int y)
    {
        a = x;
        b = y;
    }

    Add operator+(Add const &obj)
    {
        return Add(a + obj.a, b + obj.b);
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Add obj1(2, 3), obj2(4, 5);
    Add obj3 = obj1 + obj2; // Binary addition
    obj3.display();         // Output: 6 8
    return 0;
}
