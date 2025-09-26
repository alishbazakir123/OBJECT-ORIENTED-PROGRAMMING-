#include <iostream>
#include <stdexcept> // for std::runtime_error
using namespace std;

// Calculator Template Class
template <typename T>
class Calculator {
private:
    T lastResult;
public:
    Calculator() : lastResult(0) {}

    T add(T a, T b) {
        lastResult = a + b;
        return lastResult;
    }

    T subtract(T a, T b) {
        lastResult = a - b;
        return lastResult;
    }

    T multiply(T a, T b) {
        lastResult = a * b;
        return lastResult;
    }

    T divide(T a, T b) {
        if (b == 0) {
            throw runtime_error("Error: Division by zero!");
        }
        lastResult = a / b;
        return lastResult;
    }

    T getLastResult() {
        return lastResult;
    }
};

int main() {
    try {
        // Integer Calculator
        Calculator<int> intCalc;
        cout << "Int Add: " << intCalc.add(10, 5) << endl;
        cout << "Int Multiply: " << intCalc.multiply(3, 4) << endl;

        // Double Calculator
        Calculator<double> doubleCalc;
        cout << "Double Divide: " << doubleCalc.divide(10.5, 2.5) << endl;

        // This will throw an exception
        cout << "Divide by zero: " << doubleCalc.divide(10.5, 0) << endl;
    }
    catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}



