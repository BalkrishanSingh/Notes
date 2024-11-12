#include <iostream>
using namespace std;
int main(){
    cout << "Ayush Mishra\n2302490\n";
    int* ptr = new int(10);
    cout<<*ptr<<endl;
    delete ptr;
    cout<<*ptr;
}