#include <iostream>
using namespace std;

class demo{
    int y;
    public:
    void getint(int y){
        this->y = y;
    }
    void show(){
        cout<<"the integer is : "<<y;
    }
};

int main(){
    demo d;
    cout << "Ayush Mishra\n2302490\n";
    d.getint(2);
    d.show();
}