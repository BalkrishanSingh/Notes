#include <iostream>
class Cgs
{
public:
    int mtrs;
    int cms;
    Cgs(int x, int y)
    {
        mtrs = x;
        cms = y;
    }

    void display()
    {
        std::cout << mtrs << "m " << cms << "cm" << std::endl;
    }
};

class Fps
{
public:
    int feet;
    int inches;
    Fps(int x, int y)
    {
        feet = x;
        inches = y;
    }
    Fps(Cgs d)
    {
        int totalInches = (d.mtrs * 100 + d.cms) / 2.5;
        feet = totalInches / 12;
        inches = totalInches % 12;
    }
    void display()
    {
        std::cout << feet << "feet " << inches << "inches" << std::endl;
    }
};

int main()
{
    Cgs D1(9, 10);
    Fps D2 = D1;
    D1.display();
    D2.display();
    return 0;
}