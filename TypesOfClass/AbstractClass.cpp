/*An abstract class is a class which has atleast one pure virtual function by definiton.
In other words, a function that has no definition.
The abstract class descendents must define the pure virtual function,
otherwise the sub class would become an abstract in its own right.
We cannot make an object of a Abstract class.

*/

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
    void area() override
    {
        float len, wid;
        cout << "Enter length and width :" << endl;
        cin >> len >> wid;
        result = len * wid;
    }
};
class Circle : public Shape
{
public:
    void area()
    {
        float radius;
        cout << "Enter radius :";
        cin >> radius;
        result = 3.14 * radius * radius;
    }
};
int main()
{
    Rectangle r;
    r.area();
    r.display();
    Circle c;
    c.area();
    c.display();
    return 0;
}