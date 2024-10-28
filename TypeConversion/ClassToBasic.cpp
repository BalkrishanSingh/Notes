
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

    Time(int duration)
    {
        Hour = duration / 60;
        Minute = duration % 60;
    }
    Time(int hour, int min)
    {
        Hour = hour;
        Minute = min;
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
    std::cout << "Enter duration in hours and minutes : ";
    Time time;
    std::cin >> time.Hour >> time.Minute;
    std::cout << "Total minutes " << (int)time;
    return 0;
}