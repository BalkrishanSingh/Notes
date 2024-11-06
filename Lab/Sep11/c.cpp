#include <iostream>
using namespace std;
class Shape
{
public:
    float result;
    void display()
    {
        cout << "Area = " << result << endl;
    }
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        float len, wid;
        cout << "Enter length and width :" << endl;
        cin >> len >> wid;
        result = len * wid;
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";
    Rectangle r;
    r.area();
    r.display();
    return 0;
}