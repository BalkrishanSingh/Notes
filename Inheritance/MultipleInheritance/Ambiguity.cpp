/*
    Ambiguity in multiple inheritance.
    In multiple inheritance, when one class is derived from two or more base classes.
    Then there might be a possibility that the base classes have functions with the same name
    and the derived class may not have functions with that name as those of its base classes.
    If the derived class object needs to access one of the similarly named member function of the base class,
    it results in ambiguity because compiler gets confused about which base class member function should be called.

    Function Overriding
    In function overriding, if the function with the same name exists in derived class then derived class function will override base class function

    Virtual Inheritance
    In C++, problem of ambiguity can be resolved by using virtual inheritance.
    Virtual inheritance is a way of specifying that a class should be inherited virtually. 
    Meaning that only one instance of a class should be presence in the inheritance heirarchy even if the class is inherited multiple times.

*/

#include <iostream>

class A
{
public:
    void display()
    {
        std::cout << "In Class A";
    }
};
class B
{
public:
    void display()
    {
        std::cout << "In Class B";
    }
};
class C : public A, public B

{
public:
    int x;
};

int main()
{

    C c1;
    c1.B::display();
    return 0;
}