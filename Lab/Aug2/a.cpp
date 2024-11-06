#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    int a, b, c;
    cout << "Enter coefficients a b c : ";
    cin >> a >> b >> c;
    float sqr = sqrt(b * b - 4 * a * c);
    float r1 = (-b + sqr) / (2 * a);
    float r2 = (-b - sqr) / (2 * a);
    cout << "roots are " << r1 << " and " << r2;

    return 0;
}