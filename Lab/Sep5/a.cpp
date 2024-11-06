#include <iostream>
using namespace std;
class Demo
{
public:
    static int total;
    Demo()
    {
        total += 1;
    }
};

int Demo::total = 0;
int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d1;
    Demo d2;
    Demo d3;
    cout << "Number of objects : " << Demo::total;
    return 0;
}