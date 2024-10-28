#include <iostream>
using namespace std;

class A
{
private:
    void display1()
    {
        cout << "Private section of Class A";
    }

protected:
    void display2()
    {
        cout << "Protedect section of Class A";
    }

public:
    void display3()
    {
        cout << "Public section of Class A";
    }
};

class B : public A
{
private:
    void display4()
    {
        cout << "Private section of Class B";
    }

protected:
    void display5()
    {
        cout << "Protedect section of Class B";
    }

public:
    void display6()
    {
        cout << "Public section of Class B";
    }
};

int main()
{
    return 0;
}