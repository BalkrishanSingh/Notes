#include <iostream>
class Time
{
public:
    int Hour;
    int Minute;

    void Display()
    {
        std::cout << "Time = " << Hour << "Hours " << Minute << "Min" << std::endl;
    }
    Time()
    {
        Hour = 0;
        Minute = 0;
    }
    operator int()
    {
        return (Hour * 60 + Minute);
    }
};
int main()
{
    std::cout << "Balkrishan\n2302492\n";
    std::cout << "Enter duration in hours and minutes : ";
    Time time;
    std::cin >> time.Hour >> time.Minute;
    std::cout << "Total minutes " << (int)time;
    return 0;
}