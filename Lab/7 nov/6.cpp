#include <iostream>
using namespace std;
int main(){
    cout << "Ayush Mishra\n2302490\n";
    int* ptr = new int(20);
    cout<<*ptr<<endl;
    delete ptr;
    ptr = nullptr;
    cout<<ptr;
}