#include <iostream>
using namespace std;
void func()
{
    class Test
    {
    public:
        void show()
        {
            cout << "Local class function called." << endl;
        }
    };
    Test t;
    t.show();
}
int main()
{
    cout << "Balkrishan\n2302492\n";
    func();
    return 0;
}