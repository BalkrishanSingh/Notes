#include <iostream>
using namespace std;
class demo {
    public:
    void show(){
        cout<<"show function";
    }
};
 int main(){
    cout << "Ayush Mishra\n2302490\n";
    demo b;
    demo* ptr =  &b;
    ptr->show();

 }