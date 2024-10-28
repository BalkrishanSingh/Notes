/*
Execution of Constructors and destructors in inheritance.
*/
#include <iostream>

class A
{

public:
    A(int a)
    {
        std::cout << "Constructor A" << a << std::endl;
    }
    ~A()
    {
        std::cout << "Destructor A" << std::endl;
    }
};
class B
{
public:
    B()
    {
        std::cout << "Constructor B" << std::endl;
    }
    ~B()
    {
        std::cout << "Destructor B" << std::endl;
    }
};
class C : public A, public B

{
public:
    C(int a) : A(a), B()
    {
        std::cout << "Constructor C" << std::endl;
    }
    ~C()
    {
        std::cout << "Destructor C" << std::endl;
    }
};

int main()
{

    C c1(10);

    return 0;
}