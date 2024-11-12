#include <iostream>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    int *ptr = new int(10);
    cout << *ptr << endl;
    delete ptr;
    cout << *ptr;
}