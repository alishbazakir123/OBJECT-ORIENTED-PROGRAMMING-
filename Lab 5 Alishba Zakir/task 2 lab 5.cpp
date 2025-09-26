#include <iostream>
#include <string>
using namespace std;

// Calculator Class (Independent)
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }
    double multiply(double a, double b) {
        return a * b;
    }
};

// Student Class (Aggregation)
class Student {
private:
    string name;
    Calculator *calc; // Aggregation: reference to external Calculator
public:
    Student(string n, Calculator *c) : name(n), calc(c) {}

    void performCalculation(double a, double b) {
        double sum = calc->add(a, b);
        double product = calc->multiply(a, b);

        cout << name << "'s calculations:\n";
        cout << "Sum = " << sum << ", Product = " << product << "\n\n";
    }
};

int main() {
    Calculator sharedCalc;  // One calculator shared

    Student s1("Ali", &sharedCalc);
    Student s2("Ayesha", &sharedCalc);
    Student s3("Sughra", &sharedCalc);

    s1.performCalculation(5, 3);
    s2.performCalculation(10, 2);
    s3.performCalculation(8, 4);

    return 0;
}