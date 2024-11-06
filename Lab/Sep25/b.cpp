#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    Rectangle(int x, int y)
    {
        length = x;
        breadth = y;
    }
    Rectangle()
    {
    }
    void Area()
    {
        cout << "Area of Rectangle:" << length * breadth << endl;
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";

    Rectangle r1(10, 20);
    Rectangle r2;
    r2.length = 10;
    r2.breadth = 20;
    r1.Area();
    r2.Area();
}
