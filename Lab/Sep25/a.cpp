#include <iostream>
using namespace std;
class Rectangle
{
public:
    void Area(int length, int breadth)
    {
        cout << "Area of Rectangle:" << length * breadth << endl;
    }
    void Area(int side)
    {
        cout << "Area of Square : " << side * side << endl;
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";

    Rectangle r1;
    r1.Area(10, 20);
    r1.Area(10);
}