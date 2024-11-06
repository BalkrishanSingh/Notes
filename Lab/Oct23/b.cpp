
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
    Time()
    {
    }
};
int main()
{
    std::cout << "Balkrishan\n2302492\n";
    int duration;
    std::cout << "Enter duration in minutes : ";
    std::cin >> duration;
    Time time = duration;
    time.Display();
    return 0;
}