#include <iostream>
using namespace std;
class Swap
{
public:
    void swapv(int x, int y)
    {
        int temp = x;
        x = y;
        y = temp;
        cout << "Inside swapv: " << x << " " << y << endl;
    }
    void swapr(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
        cout << "Inside swapr: " << *x << " " << *y << endl;
    }
};

int main()
{
    cout << "Balkrishan\nURN:2302492\n";
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << "Before swapv: " << a << " " << b << endl;
    Swap d1;
    d1.swapv(a, b);
    cout << "After swapv: " << a << " " << b << endl;
    cout << "Before swapr: " << a << " " << b << endl;
    d1.swapr(&a, &b);
    cout << "After swapr: " << a << " " << b << endl;
    return 0;
}