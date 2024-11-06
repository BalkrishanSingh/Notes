#include <iostream>
using namespace std;

class First
{
private:
    int a;

protected:
    int b;

public:
    First()
    {
        a = 10;
        b = 20;
    }
    friend class Second;
};

class Second
{
public:
    void display(First &f)
    {
        cout << "a: " << f.a << endl;
        cout << "b: " << f.b << endl;
    }
};

int main()
{
    cout << "Balkrishan\nURN:2302492\n";
    First F1;
    Second S2;
    S2.display(F1);
    return 0;
}