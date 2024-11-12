#include <iostream>

class Base
{
public:
  void virtual Show()
  {
    std::cout << "Base class function" << std::endl;
  }
};
class Derived : public Base
{
public:
  void Show()
  {
    std::cout << "Derived class function" << std::endl;
  }
};

int main()
{
  std::cout << "Ayush Mishra\n2302490\n";
  Derived d1;

  d1.Show();
  return 0;
}
