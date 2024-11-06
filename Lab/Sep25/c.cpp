#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }
    Number operator+(const Number &other)
    {
        return Number(value + other.value); // Add two Number objects
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Number a(5), b(10);
    Number c = a + b;                   // Using the overloaded + operator
    cout << "Sum: " << c.value << endl; // Output: Sum: 15
    return 0;
}
