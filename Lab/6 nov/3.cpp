#include <iostream>
using namespace std;

class Base {
public:
    int value;
    Base() : value(0){}
    void setValue(int val) {
        value = val;
    }
    void showValue() {
        cout << "Value in Base class: " << value << endl;
    }
};

class Derived1 : virtual public Base {
public:

};

class Derived2 : virtual public Base {
public:

};

class FinalDerived : public Derived1, public Derived2 {
public:

};

int main() {
   cout << "Ayush Mishra\n2302490\n";

    FinalDerived obj;

    obj.setValue(100);

    obj.showValue();

    return 0;
}
