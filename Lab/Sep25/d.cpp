#include <iostream>
#include <stdexcept>
using namespace std;

class Division {
private:
    double num1, num2;

public:
    bool readNumbers() {
        cout << "Enter two numbers: ";
        try {
            if (!(cin >> num1 >> num2)) {
                throw runtime_error("Invalid input type");
            }
            return true;
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
            return false;
        }
    }
    void calculateDivision() {
        try {
            if (num2 == 0) {
                throw runtime_error("Divide by zero error");
            }
            double result = num1 / num2;
            cout << "Result of division: " << result << endl;
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
};

int main() {
    cerr<<"hi this is ayush";
    return 0;
}