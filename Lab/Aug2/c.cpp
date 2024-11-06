// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    cout << "Enter choice between 1-4 for operations:";
    int c, a, b;
    cin >> c;
    cout << "Enter numbers to be operated on :";
    cin >> a >> b;
    switch (c)
    {
    case 1:
        cout << "Addition: " << a + b;
        break;
    case 2:
        cout << "Subtraction: " << a - b;
        break;
    case 3:
        cout << "multiplication : " << a * b;
        break;
    case 4:
        cout << "divison : " << a / b;
        break;
    default:
        cout << "Choice between 1-4 only.";
    }

    return 0;
}