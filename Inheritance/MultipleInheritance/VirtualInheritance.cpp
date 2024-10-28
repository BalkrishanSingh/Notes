/*
Virtual Inheritance
    In C++, problem of ambiguity can be resolved by using virtual inheritance.
    Virtual inheritance is a way of specifying that a class should be inherited virtually.
    Meaning that only one instance of a class should be presence in the inheritance heirarchy even if the class is inherited multiple times.

*/

#include <iostream>

class A
{
public:
    int x;
};
class B : virtual public A

{
public:
    int y;
};
class C : virtual public A

{
public:
    int z;
};

class D : public B, public C

{
};

int main()
{

    D d;
    d.x = 10;
    return 0;
}