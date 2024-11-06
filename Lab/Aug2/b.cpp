
#include <iostream>
using namespace std;
int main()
{

    cout << "Balkrishan\n2302492\n";
    int a, b, c;
    cout << "Enter Three numbers a,b,c : ";
    cin >> a >> b >> c;
    string s = (a > b) ? ((a > c) ? "a is greatest" : "c is greatest") : ((b > c) ? "b is greatest" : "c is greatest");
    cout << s;
    return 0;
}