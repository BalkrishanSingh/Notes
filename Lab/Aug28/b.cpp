#include <iostream>
using namespace std;
class Demo
{
public:
    void add(int a, int b = 10)
    {
        cout << "addition :  " << a + b << endl;
    }
};
int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d1;
    d1.add(10);
    d1.add(10, 30);
}