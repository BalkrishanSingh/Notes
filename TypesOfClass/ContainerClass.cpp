/* A container class is a class which contains objects and members of another class.
We can create an object of one class into another class and that object will be the member of a class.
This type of relationship between classes is known as containership.
The object that is part of another object is called contained object
whereas the object that contains another object as its part is called container object
*/
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
    Second s;
    s.show2();
    return 0;
}