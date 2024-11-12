
#include <iostream>

class Base
{
public:
    void Show()
    {
        std::cout << "Base class function" << std::endl;
    }
};
class Derived : public Base
{
public:
    void Show()
    {
        std::cout << "Derived class function" << std::endl;
    }
};

int main()
{
    std::cout << "Balkrishan\n2302492\n";
    Base b1;
    b1.Show();
    Derived d1;
    d1.Show();
    Base *ptr = new Derived;
    ptr->Show();
    return 0;
}