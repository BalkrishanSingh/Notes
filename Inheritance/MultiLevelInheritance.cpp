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
        cout << "Protected section of Class A";
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
        cout << "Protected section of Class B";
    }

public:
    void display6()
    {
        cout << "Public section of Class B";
    }
};

class C : public B
{
private:
    void display7()
    {
        cout << "Private section of Class C";
    }

protected:
    void display8()
    {
        cout << "Protected section of Class C";
    }

public:
    void display9()
    {
        cout << "Public section of Class C";
    }
};

int main()
{
    return 0;
}