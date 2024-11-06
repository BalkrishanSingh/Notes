#include <iostream>
using namespace std;

class Outer
{
public:
    class Inner
    { // Nested class
    public:
        void show() { cout << "Inside Inner class\n"; }
    };

    void display() { cout << "Inside Outer class\n"; }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Outer::Inner inner;
    inner.show();
    Outer outer;
    outer.display();
    return 0;
}