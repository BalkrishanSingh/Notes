#include <iostream>
using namespace std;
class Demo
{
private:
    int a;

public:
    void display(int a)
    {
        cout << "Output :  " << a << endl;
    }
    inline void sq();
};

void Demo::sq()
{
    cout << "Enter n to be squared : ";
    cin >> a;
    display(a * a);
}
int main()
{
    cout << "Balkrishan\n2302492\n";
    Demo d1;
    d1.sq();
}