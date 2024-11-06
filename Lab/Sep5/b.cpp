#include <iostream>
using namespace std;
class Demo
{
public:
    static int n;
    static void sq()
    {
        cout << "Square is " << n * n << endl;
    }
};

int Demo::n = 10;
int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo ::sq();
    return 0;
}