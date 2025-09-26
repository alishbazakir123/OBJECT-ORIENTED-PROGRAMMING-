//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//// Logger Template Class
//template <typename T>
//class Logger {
//private:
//    string filename;
//public:
//    Logger(string file) : filename(file) {}
//
//    void log(const T &data) {
//        ofstream fileOut(filename, ios::app); // append mode
//        if (fileOut.is_open()) {
//            fileOut << data << endl;
//            fileOut.close();
//            cout << "Logged: " << data << endl;
//        } else {
//            cout << "Error: Unable to open log file." << endl;
//        }
//    }
//};
//
//int main() {
//    // Logger for integers
//    Logger<int> intLogger("int_log.txt");
//    intLogger.log(100);
//    intLogger.log(200);
//
//    // Logger for strings
//    Logger<string> stringLogger("string_log.txt");
//    stringLogger.log("First log entry");
//    stringLogger.log("Second log entry");
//
//    // Logger for double values
//    Logger<double> doubleLogger("double_log.txt");
//    doubleLogger.log(3.14159);
//    doubleLogger.log(2.71828);
//
//    cout << "Logging complete. Check the .txt files." << endl;
//
//    return 0;
//}