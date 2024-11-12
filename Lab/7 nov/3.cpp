#include <iostream>
using namespace std;
int main(){
    cout << "Ayush Mishra"<<endl<<"2302490"<<endl;
    int arr[]={1,2,3,4,5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr + i)<< " ";
    }
    
    
}
