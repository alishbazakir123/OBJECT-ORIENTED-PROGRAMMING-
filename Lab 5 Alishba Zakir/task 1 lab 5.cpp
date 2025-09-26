//#include <iostream>
//using namespace std;
//
//// Display Class
//class Display {
//public:
//    void showResult(double result) {
//        cout << "Result: " << result << endl;
//    }
//
//    void showLastResult(double lastResult) {
//        cout << "Last Result: " << lastResult << endl;
//    }
//};
//
//// Calculator Class (Composition)
//class Calculator {
//private:
//    Display display; // Composition: Display object is part of Calculator
//    double lastResult;
//
//public:
//    Calculator() : lastResult(0) {}
//
//    double add(double a, double b) {
//        lastResult = a + b;
//        display.showResult(lastResult);
//        return lastResult;
//    }
//
//    double subtract(double a, double b) {
//        lastResult = a - b;
//        display.showResult(lastResult);
//        return lastResult;
//    }
//
//    double multiply(double a, double b) {
//        lastResult = a * b;
//        display.showResult(lastResult);
//        return lastResult;
//    }
//
//    double divide(double a, double b) {
//        if (b != 0) {
//            lastResult = a / b;
//        } else {
//            cout << "Error: Division by zero!" << endl;
//            lastResult = 0;
//        }
//        display.showResult(lastResult);
//        return lastResult;
//    }
//
//    void showLast() {
//        display.showLastResult(lastResult);
//    }
//};
//
//int main() {
//    Calculator calc;
//    calc.add(10, 5);
//    calc.subtract(20, 8);
//    calc.multiply(3, 7);
//    calc.divide(15, 3);
//
//    cout << "\nDisplaying Last Result:\n";
//    calc.showLast();
//    return 0;
//}