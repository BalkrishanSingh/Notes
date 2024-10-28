
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
};
int main()
{
    std::cout << "Enter duration in minutes : ";
    int duration;
    std::cin >> duration;
    Time time = duration;
    time.Display();
    return 0;
}