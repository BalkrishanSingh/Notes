#include <iostream>
using namespace std;

class Counter
{

public:
    int count;
    Counter(int x) { count = x; }

    // Prefix increment
    Counter operator++()
    {
        ++count;
        return *this;
    }

    // Postfix increment
    Counter operator++(int)
    {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display()
    {
        cout << count << endl;
    }
};

int main()
{
    cout << "Balkrishan\n2302492\n";
    Counter c(5);
    (++c).display();
    c.display(); // Output: 6
    (++c).display();
    c.display(); // Output: 7
    return 0;
}
