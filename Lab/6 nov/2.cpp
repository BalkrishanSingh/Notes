#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Display from Base class" << endl;
    }
};

class Base2  {
public:
    void show() {
        cout << "Show from Derived class" << endl;
    }
};
class derived : public Base1 , public Base2 {

};

int main() {
    cout << "Ayush Mishra\n2302490\n";
    derived obj;  // Calls Base class function
    obj.show();     // Calls Derived class function
    return 0;
}