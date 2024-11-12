#include <iostream>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    int *ptr = new int(20);
    cout << *ptr << endl;
    delete ptr;
    ptr = nullptr;
}