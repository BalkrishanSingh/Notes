
#include <iostream>

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
    void display()
    {
        std::cout << feet << "feet " << inches << "inches" << std::endl;
    }
};
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
    operator Fps()
    {
        int totalInches = (mtrs * 100 + cms) / 2.5;
        return Fps(totalInches / 12, totalInches % 12);
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