#include <iostream>
using namespace std;
 int main(){
    cout << "Ayush Mishra\n2302490\n";
    int arr[]= {1,2,3,4};
    int *ptr = arr;
    cout<<"value at the address before increment: "<<*ptr<<endl;
    ptr = ptr + 2;   
    cout<<"value at the address after increment: "<<*ptr<<endl;
     }