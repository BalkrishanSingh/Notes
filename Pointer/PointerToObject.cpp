#include <iostream>
class Demo
{
private:
    int a;
    int b;

public:
    Demo(int x, int y) : a(x), b(y) {};
    void display()
    {
        std::cout << "A = " << a << "\nB = " << b << std::endl;
    }
};
void main()
{
    Demo *ptr;
    ptr = new Demo(70, 80);
    ptr->display();
    delete ptr;
    ptr = nullptr;
}