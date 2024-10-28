/* A class declared inside a function becomes local to that function and is called local class in C++.
A local class name can only be used locally. The methods of a local class must be definied inside it.
 */
#include <iostream>
using namespace std;
void func()
{
    class Test
    {
    public:
        void show();
    };
    void Test::show()
    {
        cout << "Local class function called." << endl;
    }
    Test t;
    t.show();
}
int main()
{
    func();
    return 0;
}